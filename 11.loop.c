#include <stdio.h>
#include <stdbool.h>

#define SIZE 4
int main (void)
{
	
	int prices[SIZE] = {100, 200, 300, 400};

	//МЫ можем ДЕКЛАРИРОВАТИ И ИНИЦИАЛИЗИРОВАТЬ переменную внутри цикла. И её значение вне цикла не изменится
	//Декларация 1; условие 2; условие 4 (порядок) 3 - тело цикла на 2 проходе мы не возвращаемся к декларации.
	//1 секция не является обязательной, а вот ; является
	printf ("\r\n[*]FOR LOOP\r\n");
	for (int i = 0; i < SIZE; ++i)
	{
		printf ("%d: %d\r\n",i , prices[i]);
	}

	bool isTrue = true;
	bool isFalse = false;

	printf("True: %d; False: %d\n",isTrue, isFalse);

	
	//Алгоритм, которому мы передаем false не начнется
	//While - пока
	//Все, что находится в теле цикла, там и остается
	int i = 0;
	printf ("\r\n[*]WHILE LOOP\r\n");
	while(i < SIZE)
	{

		printf("%d: %d\n", i, prices[i]);
		i++;
	}

/*	do
	{

	}while (условие);
	в этом случае условие выполняется хотябы раз
*/
	
	return 0;

}



/*	while()
	{
		
	}

		for (;;)
	{
		
	}

	for (int i = 0; true; ++i)
	{
		
	}
	бесконечные циклы
*/
