#include <stdio.h>
#include <string.h>
#include "circuitbreaker.h"

#pragma warning (disable : 4996)

int main()
{
	char choice[10];
	printf("Make a selection:");
	scanf('%s', choice);
	if (strcmp("BLS1", choice) == 0)
	{

	}
	else if (strcmp("BLS2", choice) == 0)
	{

	}
	else if (strcmp("BLS-TPS", choice) == 0)
	{

	}
	else if (strcmp("DC1", choice) == 0)
	{
		char state[1];
		printf("Open or Close? O/C:");
		scanf("%c", state);
		if (strcmp("O", choice) == 0)
		{

		}
		else if (strcmp("C", choice) == 0)
		{

		}
	}
	else if (strcmp("DC2", choice) == 0)
	{
		char state[1];
		printf("Open or Close? O/C:");
		scanf("%c", state);
		if (strcmp("O", choice) == 0)
		{

		}
		else if (strcmp("C", choice) == 0)
		{

		}
	}
	else if (strcmp("DC3", choice) == 0)
	{
		char state[1];
		printf("Open or Close? O/C:");
		scanf("%c", state);
		if (strcmp("O", choice) == 0)
		{

		}
		else if (strcmp("C", choice) == 0)
		{

		}
	}
	else if (strcmp("DC4", choice) == 0)
	{
		char state[1];
		printf("Open or Close? O/C:");
		scanf("%c", state);
		if (strcmp("O", choice) == 0)
		{

		}
		else if (strcmp("C", choice) == 0)
		{

		}
	}


	return 0;
}