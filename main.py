import serial
import keyboard

if __name__ == '__main__':
    serialPort = '/dev/ttyACM0'
    arduinoSerial = serial.Serial(serialPort)

    while arduinoSerial.readable():
        sensorData = arduinoSerial.readline().decode('ascii').strip()
        keyboard.press_and_release(sensorData)
