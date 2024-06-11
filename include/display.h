#ifndef DISPLAY_PROJ_H
#define DISPLAY_PROJ_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void display_init();
void display_task(uint32_t timestamp);

#ifdef __cplusplus
}
#endif

#endif