#include <stdio.h>
#include <time.h>

/**
* jack_bauer - Prints every minute of the day of
* Jack Bauer, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
printf(hour / 10 + '0');
printf(hour % 10 + '0');
printf(':');
printf(minute / 10 + '0');
printf(minute % 10) + '0');
printf('\n');
}
}
}
