#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* jack_bauer - Prints every minute of the day of
* Jack Bauer, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
int heure = 0;
while (heure < 24)
{
int minute = 0;
while (minute < 60)
{
_putchar((heure / 10) + '0');
_putchar(heure % 10 + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
minute++;
}
heure++;
}
}
