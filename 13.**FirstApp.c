#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h> 

#define APP_VERSION "0.0.1"

//#define SIZE 3
//Декларация прототипа функций, дабы вызывать их ранее, нежели они были описанны
void VersionCommand(void);
void HelpCommand(void);
//Эти 2 строчки - маппинг и они должны быть под 1 индексом
const char * const AllowedFlags[/*SIZE*/] = { "--version", "--help"};
//Создаем массив указателей на функции (и передача туда имен)
void(*CommandsStore[])(void) = {VersionCommand, HelpCommand};
//Колл-во элементов в массиве
const int const AllowedFlagsLength = sizeof AllowedFlags / sizeof AllowedFlags[0];

void ValidateFlags (const char * const flags[], const int const length)
{
	int IncorrectFlagIndex = -1;

	printf ("\r\n[*] Validator was run!\r\n");

	for (int i = 1; i < length; i++)
	{
		//printf ("arg%d: %s\r\n", i, flags[i]);
		for (int j = 0; j < AllowedFlagsLength /*SIZE*/; j++)
		{
			//printf ("Arg input: %s, Allowed arg %s\r\n", flags[i], AllowedFlags[j]);
			//printf("%s\r\n", "[+] Arg is allowed!");
			if (strcmp(flags[i], AllowedFlags[j])==0) 
			{
				IncorrectFlagIndex = -1;
				break;
			}
			else IncorrectFlagIndex = i;
		}

		
		// ! - отрицание т.е. flase
		if (/*!*/IncorrectFlagIndex > -1)
		{
			system ("color C4");
			printf ("[-] Error: %s incorrect flag was given! Incorrect flag\r\n",flags[IncorrectFlagIndex]);
			sleep (1);
			system ("color 07");
			// 1, да и любое число больше 0 означает, что програма занкончилась некорректно
			exit(EXIT_FAILURE);
		}
	}


}

void InvokeCommands (const char * const commands[], const unsigned int count)
{
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < AllowedFlagsLength; j++)
		{
			if (strcmp(commands[i], AllowedFlags[j]) == 0)
			{
				CommandsStore[j]();
			}
		}

	}

	return;
}

void VersionCommand (void)
{
	printf ("App version: %s\r\n", APP_VERSION);

	return;
}

void HelpCommand (void)
{
	printf ("Help command invoked.\r\n");

	return;
}


int main (const int const argc, const char * const argv[])
{
	if (argc > 1) ValidateFlags(argv, argc);
	else
	{
	system ("color A2");
	printf ("[+]Congratz\r\n");
	sleep (1);
	system ("color 07");
	}
	InvokeCommands(argv, argc);
	return EXIT_SUCCESS;
}
// EXIT_SUCCESS - 0
// EXIT_FAILURE - 1
