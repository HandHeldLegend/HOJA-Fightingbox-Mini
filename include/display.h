#ifndef DISPLAY_PROJ_H
#define DISPLAY_PROJ_H

#include <stdint.h>
#include "ssd1306.h"
#include <stdbool.h>
void display_init();
void display_task(uint32_t timestamp);

#endif