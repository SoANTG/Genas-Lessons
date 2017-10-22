#include <stdio.h>

#define EOL '\n'
int main (void)
{
	//Декларируем переменные
	char one = 1;
	char two = 2;
	char three = 3;
	char four = 4;
	char five = 5;

	//Декларируем переменные результаты
	char oneRes = 0; 
	char twoRes = 0;
	char threeRes = 0;
	char fourRes = 0;
	char fiveRes = 0;

	//Декларируем и иициализируем указатели
	char* onePointer = NULL;
	char* twoPointer = NULL;
	char* threePointer = NULL;
	char* fourPointer = NULL;
	char* fivePointer = NULL;

	//Присваиваем им адреса переменных
	onePointer = &one;
	twoPointer = &two;
	threePointer = &three;
	fourPointer = &four;
	fivePointer = &five;

	//Вывод значений
	printf("%carguments%c", EOL, EOL);
	printf("One variable: %d%c", one, EOL);
	printf("two variable: %d%c", two, EOL);
	printf("three variable: %d%c", three, EOL);
	printf("four variable: %d%c", four, EOL);
	printf("five variable: %d%c", five, EOL);

	//Вывод адресов, перед выводом адреса нужно указывать 0х - просто нужно (хороший тон)
	//%x, %X - маркер вывода значений в 16ричном формате
	printf("%cadress from POINTER%c", EOL, EOL);
	printf("One adress: 0x%x%c", onePointer, EOL);
	printf("two adress: 0x%x%c", twoPointer, EOL);
	printf("three adress: 0x%x%c", threePointer, EOL);
	printf("four adress: 0x%x%c", fourPointer, EOL);
	printf("five adress: 0x%x%c", fivePointer, EOL);

	printf("%cadress by AMPERSAND - &%c", EOL, EOL);
	printf("One adress: 0x%x%c", &one, EOL);
	printf("two adress: 0x%x%c", &two, EOL);
	printf("three adress: 0x%x%c", &three, EOL);
	printf("four adress: 0x%x%c", &four, EOL);
	printf("five adress: 0x%x%c", &five, EOL);

	//Сохраняем значения
	oneRes = *onePointer;
	twoRes = *twoPointer;
	threeRes = *threePointer;
	fourRes = *fourPointer;
	fiveRes = *fivePointer;

	//Вывод значений через адрес
	printf("%carguments value from dereference%c", EOL, EOL);
	printf("One value: %d%c", *onePointer, EOL);
	printf("two value: %d%c", *twoPointer, EOL);
	printf("three value: %d%c", *threePointer, EOL);
	printf("four value: %d%c", *fourPointer, EOL);
	printf("five value: %d%c", *fivePointer, EOL);

	printf("%carguments value from SAVED dereference%c", EOL, EOL);
	printf("One value: %d%c", oneRes, EOL);
	printf("two value: %d%c", twoRes, EOL);
	printf("three value: %d%c", threeRes, EOL);
	printf("four value: %d%c", fourRes, EOL);
	printf("five value: %d%c", fiveRes, EOL);

	*onePointer = 10;
	*twoPointer = 20;
	*threePointer = 30;
	*fourPointer = 40;
	*fivePointer = 50;

	printf("%cChanged arguments value from dereference%c", EOL, EOL);
	printf("One value: %d%c", *onePointer, EOL);
	printf("two value: %d%c", *twoPointer, EOL);
	printf("three value: %d%c", *threePointer, EOL);
	printf("four value: %d%c", *fourPointer, EOL);
	printf("five value: %d%c", *fivePointer, EOL);

	printf("%cadress by AMPERSAND - &%c", EOL, EOL);
	printf("One adress: 0x%x%c", &one, EOL);
	printf("two adress: 0x%x%c", &two, EOL);
	printf("three adress: 0x%x%c", &three, EOL);
	printf("four adress: 0x%x%c", &four, EOL);
	printf("five adress: 0x%x%c", &five, EOL);
	printf("Adress is same!%c",EOL, EOL);

	printf("%cChanged arguments%c", EOL, EOL);
	printf("One variable: %d%c", one, EOL);
	printf("two variable: %d%c", two, EOL);
	printf("three variable: %d%c", three, EOL);
	printf("four variable: %d%c", four, EOL);
	printf("five variable: %d%c", five, EOL);

	return 0;
}
