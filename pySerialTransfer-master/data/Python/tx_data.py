from time import sleep
from pySerialTransfer import pySerialTransfer as txfer


class struct(object):
    z = '&'
    y = 4.59



if __name__ == '__main__':
    try:
        testStruct = struct
        link = txfer.SerialTransfer('COM17')
        
        link.open()
        sleep(5)
    
        while True:
            sendSize = 0


            testStruct.y=testStruct.y+1
            
            sendSize = link.tx_obj(testStruct.z, start_pos=sendSize)
            sendSize = link.tx_obj(testStruct.y, start_pos=sendSize)
            
            link.send(sendSize)
        
    except KeyboardInterrupt:
        link.close()