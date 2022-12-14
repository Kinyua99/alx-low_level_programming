#include "main.h"

void print_alphabet_x10(void);
{
	char k;
	int ctr = 0;
	while (ctr <=0)
	{
		for (k='a'; k<='z'; k++)
		{
			_puctchar(k);
		}
		_putchar('\n');
		
		ctr ++;
	}
}
