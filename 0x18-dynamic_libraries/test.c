#include <stdlib.h>
#include <stdio.h>

int printf(const char *format, ...)
{
	write(1, "Congratulations, you win the Jackpot!", 37);
}
