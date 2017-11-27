#include <stdio.h>
#include <string.h>

#pragma warning (disable : 4996)

typedef struct switches {
	char* sName;
	int state;
}switches;



int main()
{
	char choice[10];
	switches *s = (switches*)malloc(sizeof(switches) * 6);
	s[0].sName = "DC1";
	s[1].sName = "DC2";
	s[2].sName = "DC3";
	s[3].sName = "DC4";
	s[4].sName = "ACM";
	s[5].sName = "DCM";

	s[0].state = 1;
	s[1].state = 1;
	s[2].state = 1;
	s[3].state = 1;
	s[4].state = 1;
	s[5].state = 1;



	printf("Make a selection:");
	scanf("%s", &choice);
	if (strcmp("BLS1", choice) == 0)
	{
		s[0].state = 0;
		s[1].state = 0;
		printf(" %s and %s close", s[0].sName, s[1].sName);
	}
	else if (strcmp("BLS2", choice) == 0)
	{
		s[2].state = 1;
		s[3].state = 1;
	}
	else if (strcmp("BLS-TPS", choice) == 0)
	{
		s[4].state = 1;
		s[5].state = 1;
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