# FloppBoard-STM32
Git repository for my STM32F030K6Tx
---------

!! WARNING !!


This PCB does not include short-circuit or reverse-power protection. Connecting power to the output wrongly or shorting the rails could permanently damage the board.
This is a feature, not a bug.


## FEATURES

- STM32 Arm Cortex M0 @ 48MHz
- 32kb flash memory
- 4kb SRAM

- [x] USART support and a PushButton to select from programming mode to user-flash execution mode.
- [x] Overvoltage protection
- [x] GND, 5V, and 3.3V (3V3) Pin headers
- [x] TONS of GPIO

# Pinout description.
---------

- J2 (longer connector, PinSocket):
- Pin1 = PA0;
- Pin2 = PA1;
- Pin3 = PA2 ...

- J3 (shorter connector, PinSocket):
- Pin1 = PB7;
- Pin2 = PB6;
- Pin3 = PB8 ...

- Supports USART programming directly via the chip's ROM. If you don't want to use the built in USB and be "cool" (dont do this...) and connect power ground etc, you can use PA9 as TX and PA10 as RX.

- Built-in 48MHz Crystal (oscillator)
- Auto-reset from USART (Ground breaking tech i know right?)

- The 2 x 4 PinHeader in the right-middle is for POWER. power supplying, i mean. Sure you could reverse power it from that but dont do that. Anyway, the first 4 pins (like this:

  |1 ,2|
  |3, 4|
  |5, 6|
  |7, 8|

  ) are GND (Ground), pin 5 and 6 are 5V (w/ noise immunity), and pin 7, 8 is 3.3V (w/ noise immunity, again)

- the singular push-button is for selecting whether you want to program it or no. it functions like this:

  When NOT held down, the MCU will boot its ROM bootloader (USART bridge) -> you can program it freely.
  When held down, the MCU will boot your user-flashed memory (your program basically)


[FloppBoard_STM32.zip](https://github.com/user-attachments/files/29643235/FloppBoard_STM32.zip)
