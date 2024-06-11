#include "display.h"
#include "interval.h"
#include "hardware/i2c.h"
#include "hardware/gpio.h"
#include "ssd1306.h"
#include "textRenderer/TextRenderer.h"

#define I2C_ITF i2c1
#define I2C_DISP_SDA 14
#define I2C_DISP_SCL 15

bool display_init_ok = false;
uint8_t x = 0;
uint8_t y = 0;

static pico_ssd1306::SSD1306* dp = nullptr;

void draw()
{
    dp->setPixel(x, y, pico_ssd1306::WriteMode::ADD);
    x++;
    if(x>=128)
    {
        x=0;
        y++;
    }
    if(y>=64)
    {
        x=0;
        y=0;
    }

    dp->sendBuffer(); //Send buffer to device and show on screen
}

void display_init()
{
    i2c_init(I2C_ITF, 1000000);
    gpio_set_function(I2C_DISP_SDA, GPIO_FUNC_I2C);
    gpio_set_function(I2C_DISP_SCL, GPIO_FUNC_I2C);

    //Create a new display object
    dp = new pico_ssd1306::SSD1306(I2C_ITF, 0x3C, pico_ssd1306::Size::W128xH64);
    

    drawText(dp, font_12x16, "BEEP BEEP", 0, 0);
    drawText(dp, font_12x16, "IMMA JEEP", 0, 18);
    dp->setOrientation(0);

    dp->sendBuffer(); //Send buffer to device and show on screen

}

void display_task(uint32_t timestamp)
{
    if(!display_init_ok)
    {
        display_init();
        display_init_ok = true;
        return;
    }

    static interval_s interval = {0};
    static bool invert = false;

    if(interval_run(timestamp, 100 * 1000, &interval)) // 1 second (1000 * 1000us)
    {
        draw();
    }
}