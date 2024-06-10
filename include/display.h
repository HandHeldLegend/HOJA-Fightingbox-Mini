#define PGPIO_I2C_SDA 14
#define PGPIO_I2C_SCL 15

#include <stdint.h>

bool display_init_0k = false;

void display_task(uint32_t timestamp)
{
    if(!display_init_0k)
    {
        display_init_0k = true;
        return;
    }
}