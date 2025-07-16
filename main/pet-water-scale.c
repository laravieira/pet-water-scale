#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_0, GPIO_MODE_INPUT);
    gpio_set_pull_mode(GPIO_NUM_0, GPIO_PULLUP_ONLY);

    while (true) {
        if (gpio_get_level(GPIO_NUM_0)) {
            printf("GPIO 0,5 are: HIGH\n");
        } else {
            printf("GPIO 0,5 are: LOW\n");
        }
        vTaskDelay(10);
    }
}
