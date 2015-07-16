#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include "Serial.h"

int main() {
  DWORD size;
  uint8_t buffer[24];
  const char *comPort = "COM4";
  
  printf("Opening %s\n", comPort);
  HANDLE hSerial = initSerialComm(comPort, 9600);
  
  writeToSerialPort(hSerial, "Hello world", 11);
  size = readFromSerialPort(hSerial, buffer, 12);
  printf("%.*s\n", size, buffer);
  
  printf("Closing %s\n", comPort);  
  closeSerialPort(hSerial);
  return 0;
}