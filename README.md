Intro
=====
This is a demo on serial communication through UART. You can use USB-to-Serial converter if your computer lacks RS-232 port. The program transmits `Hello world` and attempt to display any message received. __If you want to see your own message that is transmited, please ensure you loop-back `Tx` pin to `Rx` pin to see the result.__

How to Build and Run
====================
To compile:
```
  gcc serial.c main.c -o main.exe
```
To execute:
```
  ./main.exe
```
