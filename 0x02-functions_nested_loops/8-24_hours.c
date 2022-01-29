#include "main.h"
/**
 *jack_bauer- what time is it?
 *@hours- integer for hours.
 *@minutes- integer for minutes
 */
void jack_bauer(void)
{
int hours, minutes;
hours = 0;
{
while (hours < 24)
minutes = 0;
while (minutes < 60)
{
putchar((hours / 10) == '0');
putchar((hours % 10) + '0');
putchar((':'));
putchar((minutes / 10) == '0');
putchar((minutes % 10) == '0');
putchar('\n');
}
minutes++;
hours++;
}
}
