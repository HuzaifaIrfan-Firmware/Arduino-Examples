from time import sleep
from pySerialTransfer import pySerialTransfer as txfer


class struct(object):
    z = '@'
    y = 0.0

class struct2(object):
    z = '@'
    y = 0.0

SERIALPORT_FORMATS=["/dev/ttyUSB","/dev/ttyACM","COM"]
comport=""

if __name__ == '__main__':
    try:
        testStruct = struct
        testStruct2 = struct2

        link=""

        try:
            for i in range(20):
                for SERIALPORT_FORMAT in SERIALPORT_FORMATS:

                    comport=f"{SERIALPORT_FORMAT}{i}"
                    print(f'Connecting to Serial: {comport}')
                    try:
                        link = txfer.SerialTransfer(comport)
                    except:
                        print(f'Cant Connect to Serial: {comport}')
                        continue
                    print(f'Connected to Serial: {comport}')

                    raise
        except:
            pass
        
        link.open()
        sleep(5)
    
        while True:
            if link.available():
                recSize = 0
                
                testStruct.z = link.rx_obj(obj_type='c', start_pos=recSize)
                recSize += txfer.STRUCT_FORMAT_LENGTHS['c']
                
                testStruct.y = link.rx_obj(obj_type='f', start_pos=recSize)
                recSize += txfer.STRUCT_FORMAT_LENGTHS['f']

                
                print('{}{}'.format(testStruct.z, testStruct.y))


                sendSize = 0
                testStruct2.y=testStruct2.y+1
        
                sendSize = link.tx_obj(testStruct2.z, start_pos=sendSize)
                sendSize = link.tx_obj(testStruct2.y, start_pos=sendSize)
                
                link.send(sendSize)
                
            elif link.status < 0:
                if link.status == txfer.CRC_ERROR:
                    print('ERROR: CRC_ERROR')
                elif link.status == txfer.PAYLOAD_ERROR:
                    print('ERROR: PAYLOAD_ERROR')
                elif link.status == txfer.STOP_BYTE_ERROR:
                    print('ERROR: STOP_BYTE_ERROR')
                else:
                    print('ERROR: {}'.format(link.status))
                
        
    except KeyboardInterrupt:
        link.close()
