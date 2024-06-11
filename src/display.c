#include "display.h"
#include "interval.h"

bool display_init_ok = false;
uint8_t x = 0;
uint8_t y = 0;

void draw()
{
    SSD1306_DrawPixel(x, y);
    x++;
    if(x>=SSD1306_MAX_X)
    {
        y++;
        x=0;
    }
    if(y>=SSD1306_MAX_Y)
    {
        y=0;
        x=0;
    }

    SSD1306_UpdateScreen();
}

void display_init()
{
    // LCD INIT
  // ------------------------------------------------------------------------------------- 
  SSD1306_Init ();
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