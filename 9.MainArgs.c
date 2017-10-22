#include <stdio.h>

//1 аргумент (argc) - колл-во аргументов, которые передаются функции main при старте (arguments count)
//2  argv - массив строк
// Мы можем обезопасить нашу программу приведя её к виду:
// int main (unsigned(ибо колл-во аргументов всегда положительно) int argc, const char ** const argv[](я не собираюсь изменять этот массив))
int main (int argc, char ** argv[])
{
	//Он покажет нам, что есть лишь один аргумент и это - имя нашей программы.
	printf("%d\r\n", argc);

	printf("0: %s\n", argv[0]);
	// Если не вводить их, то возникнет ошибка
	printf("1: %s\n", argv[1]);
	printf("2: %s\n", argv[2]);
	return 0;
}
/*
C:\C>MainArgs.exe a b c d - программа может принимать несколько аргументов
5
MainArgs.exe
*/
