import serial

ser = serial.Serial('COM5')
print(ser.name)
while(True):
    print(ser.readline())