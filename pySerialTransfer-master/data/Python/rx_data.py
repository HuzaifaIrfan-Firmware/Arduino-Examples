from time import sleep
from pySerialTransfer import pySerialTransfer as txfer


class struct(object):
    z = ''
    y = 0.0





if __name__ == '__main__':
    try:
        testStruct = struct
        link = txfer.SerialTransfer('COM17')
        
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
