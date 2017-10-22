//Заголовочный файл, НЕ библиотека. (#name - инструкция)
#include <stdio.h>
//# - хэш
//#define - константа.
#define TAX 23

/*short Scan (void)
{
	short e;
	scanf ("%d", &e);

	return e;
}
*/
char lol (void)
{
 	return 12;
}


char GetNumber (void)
{
 	return 0;
}



char GetNumPos (void)
{
	// Декларация и инициализация
	char b = 127;

	return b;
}



char GetNumNegative (void)
{
	char c;
	c = -128;

	return c;
}

int main (void)
{
	printf ("0 - %d\r\n", GetNumber());
	printf ("b - %d\r\n", GetNumPos());
	printf ("c - %d\r\n", GetNumNegative());
	printf("lol - %d\n", lol());

	printf ("0 char - %c\r\n", GetNumber());
	printf ("b char - %c\r\n", GetNumPos());
	printf ("c char - %c\r\n", GetNumNegative());

	return0;
}

/* 
Маркеры:
		%-(не обязателен)X		-	X - ширина поля "-" выравнивание по левому краю 
		%d		-	dec;
		%c		-	char
		%s		-	string
		%i		-	integer
		%f		-	float
		%zu		-	маркер для работы с памятью
		%x, %X	-	маркер вывода значений в 16ричном формате
		используется для вывода адресов т.к самая распространенная и большая система исчисления
		%.xR	-	где x - колл-во знаков после ТОЧКИ, а R - тип марккера.
		\n\r 	- 	новая строка.
	    
Типы данных:	
int						- От -2 147 483 648 до 2 147 483 647
Unsigned int			- От 0 до 4 294 967 295
char 					- -128...127 - символы
signed char				- -128...127 - числа
Unsigned char			- 0...255
short					- -32768...32767
unsigned short			- 0...65535
bool					- false или true
long					- От -2 147 483 648 до 2 147 483 64
unsigned long			- От 0 до 4 294 967 295
long long - От -9 223 372 036 854 775 808 до 9 223 372 036 854 775 807
unsigned long long		- От 0 до 18 446 744 073 709 551 615
float					- Тип для дробных чисел
size_t 					- тип данных для работы с памятью

У каждого типа есть верхняя и низняя границы
И модификаторы (алиас / alias)
Т.е. signed & unsigned
*/