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
printf("%02d:%02d\n", hour, minute);
}
}
}
