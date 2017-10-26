#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sides.c"
#include "Moves.c"

#define SIZE 54
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

const char const code [SIZE];

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

void RMove (char array[])
{

//1 часть движения грани (Завершено)
	char RMove [12];
	int j = 2;
	for  (int i = 0; i < 9; ++i)
	{		
		RMove[i] = array [j];
		j = j + 3;
	}
	
	j = 33;
	for  (int i = 9; i < 12; ++i)
	{	
		RMove[i] = array [j];
		j = j - 3;
	}

	int RFlag1 = array[2];
	int RFlag2 = array[5];
	int RFlag3 = array[8];
	for (int i = 0; i<9; ++i)
	{
		RMove[i] = RMove[i + 3];
	}
	RMove [9] = RFlag1;
	RMove [10] = RFlag2;
	RMove [11] = RFlag3;

	j = 2;
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

//2 часть движения грани (Завершено)
	char RMoveR [8];
	j = 45;
	for  (int i = 0; i < 3; ++i)
	{		
		RMoveR[i] = array [j];
		++j;
	}

	RMoveR [3] = array[50];
	
	j = 53;
	for  (int i = 4; i < 7; ++i)
	{	
		RMoveR[i] = array [j];
		j = j - 1;
	}

	RMoveR [7] = array[48];

	char RMoveRRes[6];
	for (int i = 0; i < 6; ++i)
	{

		RMoveRRes [i] = RMoveR[i];
	}	

	int RFlagR1 = array[51];
	int RFlagR2 = array[48];

	for (int i = 2; i < 8; ++i)
	{
		RMoveR[i] = RMoveRRes[i - 2];

	}

	RMoveR [0] = RFlagR1;
	RMoveR [1] = RFlagR2;

	j = 45;
	for  (int i = 0; i < 3; ++i)
	{	
		array [j] = RMoveR [i];
		j = j + 1;
	}

	array [50] = RMoveR [3];

	j = 53;
	for  (int i = 4; i < 7; ++i)
	{	
		array [j] = RMoveR [i];
		j = j - 1;
	}

	array [48] = RMoveR [7];

	return;
}


//Вобще это - L`, но пусть пока будет L
void LMove (char array[])
{

//1 часть движения грани (Завершено)
	char LMove [12];
	int j = 0;
	for  (int i = 0; i < 9; ++i)
	{		
		LMove[i] = array [j];
		j = j + 3;
	}
	
	j = 35;
	for  (int i = 9; i < 12; ++i)
	{	
		LMove[i] = array [j];
		j = j - 3;
	}


	int LFlag1 = array[0];
	int LFlag2 = array[3];
	int LFlag3 = array[6];
	for (int i = 0; i<9; ++i)
	{
		LMove[i] = LMove[i + 3];
	}
	LMove [9] = LFlag1;
	LMove [10] = LFlag2;
	LMove [11] = LFlag3;

	j = 0;
	for  (int i = 0; i<9; ++i)
	{	
		array [j] = LMove [i];
		j = j + 3;
	}

	j = 35;
	for  (int i = 9; i<12; ++i)
	{	
		array [j] = LMove [i];
		j = j - 3;
	}

//2 часть движения грани (Завершено)
	char LMoveL [8];
	j = 38;
	for  (int i = 0; i < 3; ++i)
	{		
		LMoveL[i] = array [j];
		--j;
	}

	LMoveL [3] = array[39];
	
	j = 42;
	for  (int i = 4; i < 7; ++i)
	{	
		LMoveL[i] = array [j];
		++j;
	}

	LMoveL [7] = array[41];

	char LMoveLRes[6];
	for (int i = 0; i < 6; ++i)
	{

		LMoveLRes [i] = LMoveL[i];
	}

	int LFlagL1 = array[44];
	int LFlagL2 = array[41];

	for (int i = 2; i < 8; ++i)
	{
		LMoveL[i] = LMoveLRes[i - 2];

	}

	LMoveL [0] = LFlagL1;
	LMoveL [1] = LFlagL2;

	j = 38;
	for  (int i = 0; i < 3; ++i)
	{	
		array [j] = LMoveL [i];
		--j;
	}

	array [39] = LMoveL [3];

	j = 42;
	for  (int i = 4; i < 7; ++i)
	{	
		array [j] = LMoveL [i];
		++j;
	}

	array [41] = LMoveL [7];

	return;
}


//UMove
void UMove (char array[])
{

//1 часть движения грани (Завершено)
	char UMove [12];
	int j = 36;
	for  (int i = 0; i < 3; ++i)
	{		
		UMove[i] = array [j];
		++j;
	}

	j = 9;
	for  (int i = 3; i < 6; ++i)
	{		
		UMove[i] = array [j];
		++j;
	}

	j = 45;
	for  (int i = 6; i < 9; ++i)
	{		
		UMove[i] = array [j];
		++j;
	}

	j = 27;
	for  (int i = 9; i < 12; ++i)
	{		
		UMove[i] = array [j];
		++j;
	}	

	int UFlag1 = array[36];
	int UFlag2 = array[37];
	int UFlag3 = array[38];
	for (int i = 0; i<9; ++i)
	{
		UMove[i] = UMove[i + 3];
	}
	UMove [9] = UFlag1;
	UMove [10] = UFlag2;
	UMove [11] = UFlag3;

	j = 36;
	for  (int i = 0; i < 3; ++i)
	{		
		array [j] = UMove[i];
		++j;
	}

	j = 9;
	for  (int i = 3; i < 6; ++i)
	{		
		array [j] = UMove[i];
		++j;
	}

	j = 45;
	for  (int i = 6; i < 9; ++i)
	{		
		array [j] = UMove[i];
		++j;
	}

	j = 27;
	for  (int i = 9; i < 12; ++i)
	{		
		array [j] = UMove[i];
		++j;
	}

//2 часть движения грани (Завершено)
	char UMoveU [8];
	j = 0;
	for  (int i = 0; i < 3; ++i)
	{		
		UMoveU[i] = array [j];
		++j;
	}

	UMoveU [3] = array[5];
	
	j = 8;
	for  (int i = 4; i < 7; ++i)
	{	
		UMoveU[i] = array [j];
		--j;
	}

	UMoveU [7] = array[3];

	char UMoveURes[6];
	for (int i = 0; i < 6; ++i)
	{
		UMoveURes [i] = UMoveU[i];
	}

	int UFlagU1 = array[6];
	int UFlagU2 = array[3];

	for (int i = 2; i < 8; ++i)
	{
		UMoveU[i] = UMoveURes[i - 2];

	}

	UMoveU [0] = UFlagU1;
	UMoveU [1] = UFlagU2;

	j = 0;
	for  (int i = 0; i < 3; ++i)
	{	
		array [j] = UMoveU [i];
		++j;
	}

	array [5] = UMoveU [3];

	j = 8;
	for  (int i = 4; i < 7; ++i)
	{	
		array [j] = UMoveU [i];
		--j;
	}

	array [3] = UMoveU [7];

	return;
}


//ообще это - D`, но пусть пока будет D
void DMove (char array[])
{

//1 часть движения грани (Завершено)
	char DMove [12];
	int j = 42;
	for  (int i = 0; i < 3; ++i)
	{		
		DMove[i] = array [j];
		++j;
	}

	j = 15;
	for  (int i = 3; i < 6; ++i)
	{		
		DMove[i] = array [j];
		++j;
	}

	j = 51;
	for  (int i = 6; i < 9; ++i)
	{		
		DMove[i] = array [j];
		++j;
	}

	j = 33;
	for  (int i = 9; i < 12; ++i)
	{		
		DMove[i] = array [j];
		++j;
	}	

	int DFlag1 = array[42];
	int DFlag2 = array[43];
	int DFlag3 = array[44];
	for (int i = 0; i < 9; ++i)
	{
		DMove[i] = DMove[i + 3];
	}
	DMove [9] = DFlag1;
	DMove [10] = DFlag2;
	DMove [11] = DFlag3;

	j = 42;
	for  (int i = 0; i < 3; ++i)
	{		
		array [j] = DMove[i];
		++j;
	}

	j = 15;
	for  (int i = 3; i < 6; ++i)
	{		
		array [j] = DMove[i];
		++j;
	}

	j = 51;
	for  (int i = 6; i < 9; ++i)
	{		
		array [j] = DMove[i];
		++j;
	}

	j = 33;
	for  (int i = 9; i < 12; ++i)
	{		
		array [j] = DMove[i];
		++j;
	}

//2 часть движения грани (Завершено)
	char DMoveD [8];
	j = 20;
	for  (int i = 0; i < 3; ++i)
	{		
		DMoveD[i] = array [j];
		--j;
	}

	DMoveD [3] = array[21];
	
	j = 24;
	for  (int i = 4; i < 7; ++i)
	{	
		DMoveD[i] = array [j];
		++j;
	}

	DMoveD [7] = array[23];

	char DMoveDRes[6];
	for (int i = 0; i < 6; ++i)
	{
		DMoveDRes [i] = DMoveD[i];
	}

	int DFlagD1 = array[26];
	int DFlagD2 = array[23];

	for (int i = 2; i < 8; ++i)
	{
		DMoveD[i] = DMoveDRes[i - 2];

	}

	DMoveD [0] = DFlagD1;
	DMoveD [1] = DFlagD2;

	j = 20;
	for  (int i = 0; i < 3; ++i)
	{	
		array [j] = DMoveD [i];
		--j;
	}

	array [21] = DMoveD [3];

	j = 24;
	for  (int i = 4; i < 7; ++i)
	{	
		array [j] = DMoveD [i];
		++j;
	}

	array [23] = DMoveD [7];

	return;
}


//F`
void FMove (char array[])
{

//1 часть движения грани (Завершено)
	char FMove [12];
	int j = 6;
	for  (int i = 0; i < 3; ++i)
	{		
		FMove[i] = array [j];
		++j;
	}

	j = 45;
	for  (int i = 3; i < 6; ++i)
	{		
		FMove[i] = array [j];
		j = j + 3;
	}

	j = 20;
	for  (int i = 6; i < 9; ++i)
	{		
		FMove[i] = array [j];
		--j;
	}

	j = 44;
	for  (int i = 9; i < 12; ++i)
	{		
		FMove[i] = array [j];
		j = j - 3;
	}	

	int FFlag1 = array[6];
	int FFlag2 = array[7];
	int FFlag3 = array[8];
	for (int i = 0; i < 9; ++i)
	{
		FMove[i] = FMove[i + 3];
	}
	FMove [9] = FFlag1;
	FMove [10] = FFlag2;
	FMove [11] = FFlag3;

	j = 6;
	for  (int i = 0; i < 3; ++i)
	{		
		array [j] = FMove[i];
		++j;
	}

	j = 45;
	for  (int i = 3; i < 6; ++i)
	{		
		array [j] = FMove[i];
		j = j + 3;
	}

	j = 20;
	for  (int i = 6; i < 9; ++i)
	{		
		array [j] = FMove[i];
		--j;
	}

	j = 44;
	for  (int i = 9; i < 12; ++i)
	{		
		array [j] = FMove[i];
		j = j - 3;
	}

//2 часть движения грани (Завершено)
	char FMoveF [8];
	j = 11;
	for  (int i = 0; i < 3; ++i)
	{		
		FMoveF[i] = array [j];
		--j;
	}

	FMoveF [3] = array[12];
	
	j = 15;
	for  (int i = 4; i < 7; ++i)
	{	
		FMoveF[i] = array [j];
		++j;
	}

	FMoveF [7] = array[14];

	char FMoveFRes[6];
	for (int i = 0; i < 6; ++i)
	{
		FMoveFRes [i] = FMoveF[i];
	}

	int FFlagF1 = array[17];
	int FFlagF2 = array[14];

	for (int i = 2; i < 8; ++i)
	{
		FMoveF[i] = FMoveFRes[i - 2];

	}

	FMoveF [0] = FFlagF1;
	FMoveF [1] = FFlagF2;

	j = 11;
	for  (int i = 0; i < 3; ++i)
	{	
		array [j] = FMoveF [i];
		--j;
	}

	array [12] = FMoveF [3];

	j = 15;
	for  (int i = 4; i < 7; ++i)
	{	
		array [j] = FMoveF [i];
		++j;
	}

	array [14] = FMoveF [7];

	return;
}


void BMove (char array[])
{

//1 часть движения грани (Завершено)
	char BMove [12];
	int j = 0;
	for  (int i = 0; i < 3; ++i)
	{		
		BMove[i] = array [j];
		++j;
	}

	j = 47;
	for  (int i = 3; i < 6; ++i)
	{		
		BMove[i] = array [j];
		j = j + 3;
	}

	j = 26;
	for  (int i = 6; i < 9; ++i)
	{		
		BMove[i] = array [j];
		--j;
	}

	j = 42;
	for  (int i = 9; i < 12; ++i)
	{		
		BMove[i] = array [j];
		j = j - 3;
	}	

	int BFlag1 = array[0];
	int BFlag2 = array[1];
	int BFlag3 = array[2];
	for (int i = 0; i < 9; ++i)
	{
		BMove[i] = BMove[i + 3];
	}
	BMove [9] = BFlag1;
	BMove [10] = BFlag2;
	BMove [11] = BFlag3;

	j = 0;
	for  (int i = 0; i < 3; ++i)
	{		
		array [j] = BMove[i];
		++j;
	}

	j = 47;
	for  (int i = 3; i < 6; ++i)
	{		
		array [j] = BMove[i];
		j = j + 3;
	}

	j = 26;
	for  (int i = 6; i < 9; ++i)
	{		
		array [j] = BMove[i];
		--j;
	}

	j = 42;
	for  (int i = 9; i < 12; ++i)
	{		
		array [j] = BMove[i];
		j = j - 3;
	}

//2 часть движения грани (Завершено)
	char BMoveB [8];
	j = 27;
	for  (int i = 0; i < 3; ++i)
	{		
		BMoveB[i] = array [j];
		++j;
	}

	BMoveB [3] = array[32];
	
	j = 35;
	for  (int i = 4; i < 7; ++i)
	{	
		BMoveB[i] = array [j];
		--j;
	}

	BMoveB [7] = array[30];

	char BMoveBRes[6];
	for (int i = 0; i < 6; ++i)
	{
		BMoveBRes [i] = BMoveB[i];
	}

	int BFlagB1 = array[33];
	int BFlagB2 = array[30];

	for (int i = 2; i < 8; ++i)
	{
		BMoveB[i] = BMoveBRes[i - 2];

	}

	BMoveB [0] = BFlagB1;
	BMoveB [1] = BFlagB2;

	j = 27;
	for  (int i = 0; i < 3; ++i)
	{	
		array [j] = BMoveB [i];
		++j;
	}

	array [32] = BMoveB [3];

	j = 35;
	for  (int i = 4; i < 7; ++i)
	{	
		array [j] = BMoveB [i];
		--j;
	}

	array [30] = BMoveB [7];

	return;
}

//Вобще это - M`, но пусть пока будет M
void MMove (char array[])
{

//1 часть движения грани (Завершено)
	char MMove [12];
	int j = 1;
	for  (int i = 0; i < 9; ++i)
	{		
		MMove[i] = array [j];
		j = j + 3;
	}

	j = 34;
	for  (int i = 9; i < 12; ++i)
	{		
		MMove[i] = array [j];
		j = j - 3;
	}

	int MFlag1 = array[1];
	int MFlag2 = array[4];
	int MFlag3 = array[7];
	for (int i = 0; i < 9; ++i)
	{
		MMove[i] = MMove[i + 3];
	}
	MMove [9] = MFlag1;
	MMove [10] = MFlag2;
	MMove [11] = MFlag3;

	j = 1;
	for  (int i = 0; i < 9; ++i)
	{		
		array [j] = MMove[i];
		j = j + 3;
	}

	j = 34;
	for  (int i = 9; i < 12; ++i)
	{		
		array [j] = MMove[i];
		j = j - 3;
	}

	return;
}

//Вобще это - S`, но пусть пока будет S
void SMove (char array[])
{

//1 часть движения грани (Завершено)
	char SMove [12];
	int j = 3;
	for  (int i = 0; i < 3; ++i)
	{		
		SMove[i] = array [j];
		++j;
	}

	j = 46;
	for  (int i = 3; i < 6; ++i)
	{		
		SMove[i] = array [j];
		j = j + 3;
	}

	j = 23;
	for  (int i = 6; i < 9; ++i)
	{		
		SMove[i] = array [j];
		--j;
	}

	j = 43;
	for  (int i = 9; i < 12; ++i)
	{		
		SMove[i] = array [j];
		j = j - 3;
	}	

	int SFlag1 = array[3];
	int SFlag2 = array[4];
	int SFlag3 = array[5];
	for (int i = 0; i < 9; ++i)
	{
		SMove[i] = SMove[i + 3];
	}
	SMove [9] = SFlag1;
	SMove [10] = SFlag2;
	SMove [11] = SFlag3;

	j = 3;
	for  (int i = 0; i < 3; ++i)
	{		
		array [j] = SMove[i];
		++j;
	}

	j = 46;
	for  (int i = 3; i < 6; ++i)
	{		
		array [j] = SMove[i];
		j = j + 3;
	}

	j = 23;
	for  (int i = 6; i < 9; ++i)
	{		
		array [j] = SMove[i];
		--j;
	}

	j = 43;
	for  (int i = 9; i < 12; ++i)
	{		
		array [j] = SMove[i];
		j = j - 3;
	}

	return;
}

void EMove (char array[])
{
//1 часть движения грани (Завершено)
	char EMove [12];
	int j = 39;
	for  (int i = 0; i < 3; ++i)
	{		
		EMove[i] = array [j];
		++j;
	}

	j = 12;
	for  (int i = 3; i < 6; ++i)
	{		
		EMove[i] = array [j];
		++j;
	}

	j = 48;
	for  (int i = 6; i < 9; ++i)
	{		
		EMove[i] = array [j];
		++j;
	}

	j = 30;
	for  (int i = 9; i < 12; ++i)
	{		
		EMove[i] = array [j];
		++j;
	}	

	int EFlag1 = array[39];
	int EFlag2 = array[40];
	int EFlag3 = array[41];
	for (int i = 0; i<9; ++i)
	{
		EMove[i] = EMove[i + 3];
	}
	EMove [9] = EFlag1;
	EMove [10] = EFlag2;
	EMove [11] = EFlag3;

	j = 39;
	for  (int i = 0; i < 3; ++i)
	{		
		array [j] = EMove[i];
		++j;
	}

	j = 12;
	for  (int i = 3; i < 6; ++i)
	{		
		array [j] = EMove[i];
		++j;
	}

	j = 48;
	for  (int i = 6; i < 9; ++i)
	{		
		array [j] = EMove[i];
		++j;
	}

	j = 30;
	for  (int i = 9; i < 12; ++i)
	{		
		array [j] = EMove[i];
		++j;
	}

	return;
}

int main (void)
{	
//Ввод данных
	printf ("\r\n");
	printf ("Please type your text\r\n");
	char code [SIZE];
	gets (code);
	
	for (int i = 0; i < SIZE; ++i)
	{
		printf ("%c", code[i]);
	}
	printf ("\r\n");
	printf ("That is your text\r\n");

//Визуализация сторон
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


//Вывод функции движения (в разработке)
/*	int length = 0;
	printf ("Please enter the estimated length of the scramble\r\n");
	scanf ("%i", &length);
	
	printf("Type the scramble\r\nR - clockwise\r\nr - counterclock-wise\r\n");
	char scramble [length];
	gets (scramble);
	int size = strlen(scramble);
	printf ("\r\n");

	if (size != length)
	{
		while (size != length)
		{
			gets (scramble);
			int size = strlen(scramble);
			printf("Please enter correct scramble\r\n");
		}
	}*/
	
//Визуализация измененных сторон
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
	return EXIT_SUCCESS;
}
//Ввод
	//UUUUUUUUUFFFFFFFFFDDDDDDDDDBBBBBBBBBLLLLLLLLLRRRRRRRRR
	//123456789123456789123456789123456789123456789123456789
	//0123456789QWERTYUIOPASDFGHJKLZXCVBNM123456789123456789
