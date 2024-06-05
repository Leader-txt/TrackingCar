#include "driverlib.h"

#include <stdint.h>

#include <stdbool.h>

int main(void)
{
    volatile uint32_t ii;

    /* Halting the Watchdog */
    MAP_WDT_A_holdTimer();

    /* Configuring P1.0 as output */
    MAP_GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);

    while (1)
    {
        /* Delay Loop */
        for(ii=0;ii<5000;ii++)
        {
        }

        MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
    }
}


