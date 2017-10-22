#include <stdio.h>

//Переменный a и b - локальные, аргументы функции "total" действуют, существуют только в функции total
unsigned short total (unsigned short a, unsigned short b)
{
	// если не инициализировать переменную, то там будет храиться мусор
	unsigned short total1 = 0;

	//Спросить у артема - почему нет конфликта имен
	total1 = a + b;

	//return a+b;
	return total1;
}

short sub (char x, char y)
{
	
	return x-y;
}

unsigned short sum (unsigned short a, unsigned short b, unsigned short c)
{
	
	return a + b + c;
}
// Пока, что в main нет переменных a и b, но скоро они тут появятся
int main (void)
{
	char a = 0;
	// (2, 2) - a и b
	total(2, 2 );
	printf("\r\nsub\r\n");
	printf ("sub1 - %i\r\nsub2 - %i\r\nsub3 - %i\r\n", sub(3, 2), sub(4, 5), sub(a, 5));
	printf("\r\ntotal&sum\r\n");
	printf("total1 - %i\r\nsum1 - %i\r\n", total(2, 2), sum(2, 3, 5));
	return0;
}