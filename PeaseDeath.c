#include <stdio.h>
#include <string.h>

#define SIZE 54

const char const code [SIZE];

//Функция ввода данных

//Функция заполняющая двухмерный массив символами введенных данных 
void Uside (char array[])
{	
	int ind = 0;
	char Uside[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Uside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf ("[%c] ", Uside[i][j]);
		}
		printf ("\r\n");
	}
	return;
}

//Функция заполняющая двухмерный массив символами введенных данных 
void Fside (char array[])
{	
	int ind = 9;
	char Fside[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Fside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf ("[%c] ", Fside[i][j]);
		}
		printf ("\r\n");
	}
	return;
}

//Функция заполняющая двухмерный массив символами введенных данных 
void Dside (char array[])
{	
	int ind = 18;
	char Dside[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Dside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf ("[%c] ", Dside[i][j]);
		}
		printf ("\r\n");
	}
	return;
}

//Функция заполняющая двухмерный массив символами введенных данных 
void Bside (char array[])
{	
	int ind = 27;
	char Bside[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Bside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf ("[%c] ", Bside[i][j]);
		}
		printf ("\r\n");
	}
	return;
}

//Функция заполняющая двухмерный массив символами введенных данных 
void Lside (char array[])
{	
	int ind = 36;
	char Lside[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Lside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf ("[%c] ", Lside[i][j]);
		}
		printf ("\r\n");
	}
	return;
}

//Функция заполняющая двухмерный массив символами введенных данных 
void Rside (char array[])
{	
	int ind = 45;
	char Rside[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Rside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf ("[%c] ", Rside[i][j]);
		}
		printf ("\r\n");
	}
	return;
}

//Частично написанная функция сдвига массива
void RMove (char array[])
{

	char RMove [12];
	for  (int i = 0; i < 3; ++i)
	{	
		int j = 2;
		RMove[i] = array [j];
		j = j + 3;
	}

	for  (int i = 3; i < 6; ++i)
	{	
		int j = 11;
		RMove[i] = array [j];
		j = j + 3;
	}

	for  (int i = 6; i < 9; ++i)
	{	
		int j = 20;
		RMove[i] = array [j];
		j = j + 3;
	}

	for  (int i = 9; i < 12; ++i)
	{	
		int j = 33;
		RMove[i] = array [j];
		j = j - 3;
	}

	for (int i = 0; i < 12; ++i)
	{
		printf("%i=%c; ", i, RMove[i]);
	}

	printf ("\r\n");

	int RFlag1 = array[0];
	int RFlag2 = array[1];
	int RFlag3 = array[2];
	for (int i = 0; i<9; ++i)
	{
		RMove[i] = RMove[i + 3];
	}
	RMove [9] = RFlag1;
	RMove [10] = RFlag2;
	RMove [11] = RFlag3;

	for (int i = 0; i < 12; ++i)
	{
		printf("%i=%c; ", i, RMove[i]);
	}

	int j = 2;
	for  (int i = 0; i<9; ++i)
	{	
		array [j] = RMove [i];
		j = j + 3;
	}

	j = 33;
	for  (int i = 9; i<12; ++i)
	{	
		array [j] = RMove [i];
		j = j - 3;
	}


	return;
}


int main (void)
{	
	char code [SIZE];
	gets (code);

	printf ("\r\nU - SIDE\r\n");
	Uside (code);

	printf ("\r\nF - SIDE\r\n");
	Fside (code);

	printf ("\r\nD - SIDE\r\n");
	Dside (code);

	printf ("\r\nB - SIDE\r\n");
	Bside (code);

	printf ("\r\nL - SIDE\r\n");
	Lside (code);

	printf ("\r\nR - SIDE\r\n");
	Rside (code);

	printf ("\r\nR MOVE\r\n");
	RMove (code);

	printf ("\r\nU - SIDE\r\n");
	Uside (code);

	printf ("\r\nF - SIDE\r\n");
	Fside (code);

	printf ("\r\nD - SIDE\r\n");
	Dside (code);

	printf ("\r\nB - SIDE\r\n");
	Bside (code);

	printf ("\r\nL - SIDE\r\n");
	Lside (code);

	printf ("\r\nR - SIDE\r\n");
	Rside (code);
	return 0;
}
