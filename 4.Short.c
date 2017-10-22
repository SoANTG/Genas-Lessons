#include <stdio.h>

int main (void)
{
	unsigned short firstValue	= 30000;
	unsigned short secondValue	= 20000;
	signed short thirdValue		= -30000;

	printf("\r\n");

	printf("%13s %i \r\n", "firstValue:", firstValue);
	printf("%13s %i \r\n", "secondValue:", secondValue);
	printf("%13s %i \r\n", "thirdValue:", thirdValue);

	return0;
}
