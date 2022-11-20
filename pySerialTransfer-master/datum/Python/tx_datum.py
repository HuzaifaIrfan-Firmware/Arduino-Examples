from time import sleep
from pySerialTransfer import pySerialTransfer as txfer


y = 6.57


if __name__ == '__main__':
    try:
        link = txfer.SerialTransfer('COM17')
        
        link.open()
        sleep(5)
    
        while True:
            sendSize = link.tx_obj(y)
            link.send(sendSize)
        
    except KeyboardInterrupt:
        link.close()