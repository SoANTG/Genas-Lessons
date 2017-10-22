#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h> 


//#define SIZE 3

const char * const AllowedFlags[/*SIZE*/] = { "--size", "--sort", "--print", "--godmode", "--a" };
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

int main (const int const argc, const char * const argv[])
{
	if (argc > 1) ValidateFlags(argv, argc);
	system ("color A2");
	printf ("[+]Congratz");
	sleep (1);
	system ("color 07");
	return EXIT_SUCCESS;
}
// EXIT_SUCCESS - 0
// EXIT_FAILURE - 1
