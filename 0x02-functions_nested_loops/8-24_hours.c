#include "holberton.h"
/**
 * jack_bauer - display every minute from 00:00 to 23:59
 * Return: always 0
 */
void jack_bauer(void)
{
int counter_minute;
int counter_hour = 0;
do {
counter_minute = 0;
do {
_putchar((counter_hour / 10) + '0');
_putchar((counter_hour % 10) + '0');
_putchar(':');
_putchar((counter_minute / 10) + '0');
_putchar((counter_minute % 10) + '0');
counter_minute++;
_putchar('\n');
} while (counter_minute < 60);
counter_hour++;
} while (counter_hour < 24);
}
