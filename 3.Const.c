#include <stdio.h>

//#define - константа.
#define TAX 23
//Да, можно делать даже так.
#define D ;
#define P main

int P /* main */ (void)
{
	//number - переменная
	short number = 10;

	printf("number2 - %i\r\n", number);

	number = 20 D

	printf("number1 - %i\r\n", number);

	printf("TAX - %i\r\n", TAX) D

	return 0;
}		
