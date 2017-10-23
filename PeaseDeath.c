#include <stdio.h>
#include <string.h>

#define SIZE 54

const char const code [SIZE];

//Функция ввода данных
void getcode ()
{

	for (int i = 0; i < strlen(code); ++i)
	{
		printf ("%c", code[i]);
	}
	printf ("\r\n");
}

//Функция заполняющая двухмерный массив символами введенных данных 
void Uside (char array[])
{	
	int ind = 0;
	char Uside[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Uside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf ("[%d][%d] = %c; ", i, j, Uside[i][j]);
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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Fside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf ("[%d][%d] = %c; ", i, j, Fside[i][j]);
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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Dside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf ("[%d][%d] = %c; ", i, j, Dside[i][j]);
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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Bside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf ("[%d][%d] = %c; ", i, j, Bside[i][j]);
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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Lside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf ("[%d][%d] = %c; ", i, j, Lside[i][j]);
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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			Rside[i][j] = array[ind];
			ind = ind + 1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf ("[%d][%d] = %c; ", i, j, Rside[i][j]);
		}
		printf ("\r\n");
	}
	return;
}


int main (void)
{	
	char code [54];
	gets (code);
	getcode();

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
