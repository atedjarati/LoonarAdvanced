/*
Loonar Technologies Configuration Header File

DO NOT EDIT THIS FILE!!!!!!!!!!!!!!!!
 
Copyright 2018 Loonar Technologies, LLC

      THIS SOFTWARE IS PRESENTED WITH THE MIT LICENCE:

* Permission is hereby granted, free of charge, to any person 
* obtaining a copy of this software and associated documentation 
* files (the "Software"), to deal in the Software without 
* restriction, including without limitation the rights to use, 
* copy, modify, merge, publish, distribute, sublicense, and/or 
* sell copies of the Software, and to permit persons to whom the 
* Software is furnished to do so, subject to the following conditions:

* The above copyright notice and this permission notice shall be included 
* in all copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
* OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR 
* ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF 
* CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION 
* WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/
#ifndef Configuration_h
#define Configuration_h

/********** PINOUT **********/
const int CS_BMP =                     2;    // Chip Select Pin for the BMP280 Sensor 
const int GFSK_GATE =                  5;    // Gate pin for power to the radio
const int GFSK_SDN =                   6;    // Shutdown pin for the radio
const int GFSK_GPIO2 =                 7;    // GPIO #2 pin for the radio 
const int GFSK_GPIO3 =                 8;    // GPIO #3 pin for the radio
const int GFSK_IRQ =                   14;   // IRQ pin for the radio
const int VCAP_SENSE =                 A1;   // Analog input to read supercapacitor voltage
const int RB_SLEEP =                   17;   // Iridium modem sleep pin
const int GFSK_GPIO1 =                 20;   // GPIO #1 pin for the radio
const int GFSK_GPIO0 =                 21;   // GPIO #0 pin for the radio
const int GFSK_CS =                    22;   // Chip Select Pin for the radio
const int SD_CS =                      23;   // Chip Select pin for the SD Card
const int VBAT_SENSE =                 A11;  // Analog input to read battery voltage


// Part of the GPIO Extender chip running on i2c
const int GPS_GATE =                   0;    // Gate pin for power to the GPS
const int EN_5V =                      2;    // Enable pin for the 5V Line
const int RB_GATE =                    3;    // Gate pin for power to the RockBlock
const int CAM_GATE =                   4;    // Gate pin for power to the camera
const int CAM_CTRL =                   5;    // Enable pin for the camera
const int CUT_GATE =                   6;    // Gate pin for power to cutdown

/***********************************************************************************************************************************************************************/

/********** CONSTANTS **********/  
      double   IRIDIUM_LOOP_TIME =                               6.0;                          // Loop time for Iridium in minutes. 
      long     INTERVAL_TIME =                                   1000;                         // Loop time for entire program in microseconds. 
const char     LANDED_COMMAND[] =                                {"Landed"};                   // Landed Command to be sent over radio/iridium communications for low power mode.
const uint8_t  ADC_RESOLUTION =                                  12;                           // ADC Resolution in bits.
const uint8_t  FCC_ID_INTERVAL =                                 10;                           // Every 'x' number of messages, we send our FCC ID. 
const uint8_t  CAMERA_INTERVAL =                                 25;                           // Every 'x' number of loops, we take a picture. 
const uint8_t  BUF_SIZE =                                        100;                          // Data array size for telemetry in bytes. 
const int      GPS_ACQUISITION_TIME =                            200;                          // GPS Parser acquisition time per loop in milliseconds. 
const float    SUPERCAP_MIN_LIMIT =                              4.9;                         // Minimum number of volts to charge the supercapacitor to during startup. 
const float    SUPERCAP_CUTDOWN_VOLTAGE_MIN =                    2.9;                          // Voltage to drain the supercapacitor to during cutdown in volts. 
const long     CUTDOWN_MAX_TIME =                                5000;                         // Maximum time to keep the cutdown active in milliseconds. 
const uint8_t  MSG[] = {                                                                       // Command to send to GPS for high altitude mode upon startup.
    0xB5, 0x62, 0x06, 0x24, 0x24, 0x00, 0xFF, 0xFF, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x10, 0x27, 0x00, 0x00, 
    0x05, 0x00, 0xFA, 0x00, 0xFA, 0x00, 0x64, 0x00, 0x2C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0xDC };

#endif /* Configuration_h */
