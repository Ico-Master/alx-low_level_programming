#include "main.h"


void positive_or_negative(int i)
{
	if (i < 0)
		printf( "%d is negative", i);
	else if ( i > 0)
		printf("%d is positive", i);
	else 
		printf("0 is zero");
}


