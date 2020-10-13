# Pinout

These are list of pins connected on your IOT-A-SYNC board.

For ESP-32 datasheet visit : [https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf)

For ESP32-Wroom datasheet visit : [https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32_datasheet_en.pdf](https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32_datasheet_en.pdf)


| GPIO |   INPUT   | OUTPUT |                   NOTES                   | Peripheral pins | Available on header |
|:----:|:---------:|:------:|:-----------------------------------------:|:---------------:|:-------------------:|
| 0    | pulled up | OK     | outputs PWM signal at boot                |                 | YES                 |
| 1    | TX pin    | OK     | debut output at boot                      |                 | YES                 |
| 2    | OK        | RX pin | connected to on-board LED (in some wroom) | LED/EC_17       | YES                 |
| 3    | OK        | OK     | HIGH at boot                              |                 | YES                 |
| 4    | OK        | OK     |                                           | SWITCH/EC_18    | YES                 |
| 5    | X         | X      | outputs PWM signal at boot                | LoRa_NSS(SS/CS) | YES                 |
| 6    | X         | X      | connected to the integrated SPI flash     |                 | NOT REQUIRED        |
| 7    | X         | X      | connected to the integrated SPI flash     |                 | NOT REQUIRED        |
| 8    | X         | X      | connected to the integrated SPI flash     |                 | NOT REQUIRED        |
| 9    | X         | X      | connected to the integrated SPI flash     |                 | NOT REQUIRED        |
| 10   | X         | X      | connected to the integrated SPI flash     |                 | NOT REQUIRED        |
| 11   | OK        | OK     | connected to the integrated SPI flash     |                 | NOT REQUIRED        |
| 12   | OK        | OK     | Boot fail if pulled HIGH                  |                 | YES                 |
| 13   | OK        | OK     |                                           |                 | YES                 |
| 14   | OK        | OK     | outputs PWM signal at boot                |                 | YES                 |
| 15   | OK        | OK     | outputs PWM signal at boot                | IR_RX           | YES                 |
| 16   | OK        | OK     |                                           | LoRa_DIO0       | YES                 |
| 17   | OK        | OK     |                                           | IR_TX           | YES                 |
| 18   | OK        | OK     |                                           | LoRa_SCK        | YES                 |
| 19   | OK        | OK     |                                           | LoRa_MISO       | YES                 |
| 21   | OK        | OK     |                                           | SDA             | YES                 |
| 22   | OK        | OK     |                                           | SCL             | YES                 |
| 23   | OK        | OK     |                                           | LoRa_MOSI       | YES                 |
| 25   | OK        | OK     |                                           | EC_1            | YES                 |
| 26   | OK        | OK     |                                           | EC_2            | YES                 |
| 27   | OK        | OK     |                                           | LoRa_RESET      | YES                 |
| 32   | OK        | OK     |                                           | EC_9            | YES                 |
| 33   | OK        | OK     |                                           | EC_10           | YES                 |
| 34   | OK        |        | input only                                | EC_4            | YES                 |   
| 35   | OK        |        | input only                                | EC_5            | YES                 |
| 36   | OK        |        | input only                                | EC_6            | YES                 |
| 39   | OK        |        | input only                                | EC_3            | YES                 |