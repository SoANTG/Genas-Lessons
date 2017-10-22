#include <stdio.h>

//Т.к. она не изменяет значения, которые мы ей передаем
void PrintString (const char * string)
{
	printf("%s\n", string);

	return;
}
//Две "*" т.к. массив хранит адреса на другие массивы, которые (по умолчанию) являются адресами их нулевых элементов 
void PrintArrayString (const char ** string)
{
	
	printf ("(0)1 city: %s\r\n", string[0]);
	printf ("(1)2 city: %s\r\n", string[1]);
	printf ("(2)3 city: %s\r\n", string[2]);

	return ;
}
//1 аргумент (argc) - колл-во аргументов, которые передаются функции main при старте (arguments count)
//2  argv - массив строк
int main (void)
{
	//\0 - Null terminated sign, без него это просто массив, а с ним это уже строка
	//Не стоит указывать размер в самом начале
	char Hello1[] = {'H', 'e', 'l', 'l', 'o', '1', '\0'};
	char Hello2[] = "Hello2";

	//Имя масива - указатель а его нулевой элемент
	//Мы не можем изменять значения в строке задекларированной при помощи указателя(ПРОСТО НЕ НАДО)(Данная строка - КОНСТАНТА)
	//И дабы обезопасить себя от подобного мы добавляем const в начло
	const char * Hello3 = "Hello3";
	//const пред именем означает, чо мы не можем изменить даже адрес
	const char * const Hello4 = "Hello4";
	// Эо массив указателей, т.е. массив массивов или же массив строк или же массив адресов
	const char * states[] = {"Moscow", "New-York", "Kiev"};
	//Еще 1 вид массива массивов (принцип мноогомерного массива) [Колл-во элементов][Максимальная длинна\колл-во элементов]
	const float * prices[3][2] = {{0,0}, {0,0}, {0,0}};

	printf ("Hello1: %s\r\n", Hello1);
	printf ("Hello2: %s\r\n", Hello2);
	printf ("Hello3: %s\r\n", Hello3);
	printf ("Hello4: %s\r\n", Hello4);

	//Это доказывает то, что имя массива указывает на нулевой элемент массива.
	printf ("\r\n0 ELEMENT\r\n");
	printf ("Hello3: %c\r\n", *Hello3);
	printf ("Hello4: %c\r\n", *Hello4);

	Hello1[0] = 'X';
	printf ("Changed Hello1: %s\r\n", Hello1);

	printf ("\r\n[*] BEFORE\r\n");
	printf ("Hello3: %p\r\n", Hello3);
	printf ("Hello4: %p\r\n", Hello4);
	//Мы можем изменять адрес, а следовательно и значение
	Hello3 = Hello4;
	printf ("\r\n[*] AFTER\r\n");
	printf ("Hello3: %p\r\n", Hello3);
	printf ("Hello4: %p\r\n", Hello4);
	printf ("\r\n[*] (SAME VALUE)\r\n");
	printf ("Hello3: %s\r\n", Hello3);
	printf ("Hello4: %s\r\n", Hello4);
	//А так уже нельзя ибо Hello4 - const
	//Hello4 = Hello3;
	printf ("\r\n[*] PRINT BY (PrintString)\r\n");
	PrintString(Hello3);
	PrintString(Hello4);

	// //Вывод мавссива массивов
	printf ("\r\n[*] MASSIVE OF MASSIVES\r\n");
	printf("0: %s\r\n", states[0]);
	printf("1: %s\r\n", states[1]);
	printf("2: %s\r\n", states[2]);

	printf ("\r\n[*] MASSIVE OF MASSIVES BY TWO **\r\n");
	PrintArrayString(states);


	//Hello3[0] = 'X';
	//printf ("Hello3: %s\r\n", Hello3); (прога ломается (если есть "const" то выдает ошибку компиляции))

	return 0;
}
