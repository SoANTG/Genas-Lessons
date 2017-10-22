#include <stdio.h>
#define SIZE 4

//array - общее имя и мы можем передать массив с другим именем (не стоит привязываться к 1 имени)
void showArryAdresses(float array[])
{

	printf ("\r\n[*] ARRAY ADRESSES\r\n");
	printf ("0: 0x%p\r\n", &array[0]);
	printf ("1: 0x%p\r\n", &array[1]);
	printf ("2: 0x%p\r\n", &array[2]);
	printf ("3: 0x%p\r\n", &array[3]);
	return;
}

// ЭТО ОПТИМИЗАЦИЯ
void showArryAdressesByPointer(float * array)
{

	printf ("\r\n[*] ARRAY ADRESSES BY POINTER\r\n");
	printf ("0: 0x%p\r\n", &array[0]);
	printf ("1: 0x%p\r\n", &array[1]);
	printf ("2: 0x%p\r\n", &array[2]);
	printf ("3: 0x%p\r\n", &array[3]);
	return;
}



int main (void)
{

	float prices[SIZE] = {1000.0f, 2000.0f, 3000.0f, 4000.0f};

	//index access
	//Квадратные скобки - "синтаксический сахар"
	//Они преобразуются в выр-е вида *(prices + 0) 
	printf ("\r\n[*] INDEX\r\n");
	printf ("0: %10.2f\r\n", prices[0]);
	printf ("1: %10.2f\r\n", prices[1]);
	printf ("2: %10.2f\r\n", prices[2]);
	printf ("3: %10.2f\r\n", prices[3]);

	//pinter acces
	//Имя массива является адресом (указателем)
	//через простую (*) мы получаем значения нулевого аргумента
	//(*) - оператор и в данном случае она имееет высший приритет
	printf ("\r\n[*] POINTER\r\n");
	printf ("0: %10.2f\r\n", *(prices + 0));
	printf ("1: %10.2f\r\n", *(prices + 1));
	printf ("2: %10.2f\r\n", *(prices + 2));
	printf ("3: %10.2f\r\n", *(prices + 3));
	printf ("\r\n[*] MISTAKE\r\n");
	printf ("1: %10.2f\r\n", *prices + 1);

	//size_t - тип данных для работы с памятью
	//sizeof - размер в байтах 
	size_t FloatSize = sizeof(float);
	size_t IntSize = sizeof(int);
	size_t CharSize = sizeof(char);
	//%zu - маркер для работы с памятью
	printf("\r\n[*] ElEMENTS SIZES");
	printf ("\nFloat size: %i bytes\n", FloatSize);
	printf ("\nInt size: %i bytes\n", IntSize);
	printf ("\nChar size: %i bytes\n", CharSize);
	printf ("\nPrices size: %i bytes\n", sizeof prices);
	//(имя нужного массива)
	showArryAdresses(prices);
	showArryAdressesByPointer(prices);
	return 0;
}

// 15 - 0...9 т.е. 0...f
/*
0..9
10 - A
11 - B
12 - C
13 - D
14 - E
15 - F
*/