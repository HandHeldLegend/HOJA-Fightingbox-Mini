#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

// Device stuff
#define HOJA_DEVICE_ID  0xD001
#define HOJA_FW_VERSION 0x0A00

// RGB Stuff
#define HOJA_RGB_PIN 0
#define HOJA_RGB_COUNT 32
#define HOJA_RGBW_EN 0

// GPIO definitions
//#define HOJA_SERIAL_PIN 28
//#define HOJA_CLOCK_PIN 4
//#define HOJA_LATCH_PIN 5

#define HOJA_ANALOG_HAIRTRIGGER_L 50<<4
#define HOJA_ANALOG_HAIRTRIGGER_R 50<<4

// Sets the analog light trigger level for SP function
#define HOJA_ANALOG_LIGHT 50

// URL that will display to open a config tool
#define HOJA_WEBUSB_URL     "handheldlegend.github.io/hoja_config"
#define HOJA_MANUFACTURER   "Fightingbox"
#define HOJA_PRODUCT        "Mini"

#define HOJA_CAPABILITY_ANALOG_STICK_L 0
#define HOJA_CAPABILITY_ANALOG_STICK_R 0
#define HOJA_CAPABILITY_ANALOG_TRIGGER_L 0
#define HOJA_CAPABILITY_ANALOG_TRIGGER_R 0

#define HOJA_CAPABILITY_BLUETOOTH 0
#define HOJA_CAPABILITY_BATTERY 0
#define HOJA_CAPABILITY_RGB 1
#define HOJA_CAPABILITY_GYRO 0

#define HOJA_CAPABILITY_NINTENDO_SERIAL 0
#define HOJA_CAPABILITY_NINTENDO_JOYBUS 0

#define HOJA_CAPABILITY_RUMBLE_ERM 0
#define HOJA_CAPABILITY_RUMBLE_LRA 0

#define HOJA_RGB_GROUP_RS       {-1}
#define HOJA_RGB_GROUP_LS       {-1}
#define HOJA_RGB_GROUP_DPAD     {8,9,10,11}
#define HOJA_RGB_GROUP_MINUS    {-1}
#define HOJA_RGB_GROUP_CAPTURE  {-1}
#define HOJA_RGB_GROUP_HOME     {-1}
#define HOJA_RGB_GROUP_PLUS     {-1}

#define HOJA_RGB_GROUP_Y        {1}
#define HOJA_RGB_GROUP_X        {0}
#define HOJA_RGB_GROUP_A        {7}
#define HOJA_RGB_GROUP_B        {6}

#define HOJA_RGB_GROUP_L        {3}
#define HOJA_RGB_GROUP_R        {2}

#define HOJA_RGB_GROUP_ZR       {5}
#define HOJA_RGB_GROUP_ZL       {4}
#define HOJA_RGB_GROUP_PLAYER   {-1}

#endif
