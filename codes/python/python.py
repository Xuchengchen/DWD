import serial

ser1 = serial.Serial('COM5')
ser2 = serial.Serial('COM8')
print(ser1.name)
print(ser2.name)
while(True):
    if ser1.inWaiting():
        print("ser1",ser1.readline())
    print("ser2",ser2.readline())