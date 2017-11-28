#include <stdio.h>
#include <string.h>

#pragma warning (disable : 4996)

typedef struct switches {
	char* sName;
	int state;
}switches;

void closeUpstream(switches *s, char *select)
{
	if (strncmp(select, "DC", 2) == 0){
		s->state = 1;
		(s + 1)->state = 1;
	}
	else if (strcmp(select, "DCM") == 0) {
		s->state = 1;
	}
}

void openDownStream(switches *s, char *select)
{
	if (strcmp(select, "AC") == 0){
		for (int i = 0; i < 4; i++) {
			s->state = 0;
			s++;
		}
	}
	else if (strcmp(select, "DCM") == 0){
		for (int i = 0; i < 5; i++) {
			s->state = 0;
			s++;
		}
	}
}


int main()
{
	char *choice = malloc(sizeof(char) * 10);
	char *sel = malloc (sizeof (char));
	char *state = malloc(sizeof(char));
	char buf[10];
	switches *s = (switches*)malloc(sizeof(switches) * 6);
	s[0].sName = "AC";
	s[1].sName = "DCM";
	s[2].sName = "DC1";
	s[3].sName = "DC2";
	s[4].sName = "DC3";
	s[5].sName = "DC4";

	s[0].state = 1;
	s[1].state = 1;
	s[2].state = 1;
	s[3].state = 1;
	s[4].state = 1;
	s[5].state = 1;

	int cont = 1;

	while (cont) {
		printf("Make a selection:");
		scanf("%8s", &buf);
		strcpy(choice, buf);
		if (strcmp("BLS1", choice) == 0)
		{
			s[2].state = 0;
			s[3].state = 0;
			printf("%s and %s open\n", s[2].sName, s[3].sName);
		}
		else if (strcmp("BLS2", choice) == 0)
		{
			s[4].state = 0;
			s[5].state = 0;
			printf("%s and %s open\n", s[4].sName, s[5].sName);
		}
		else if (strcmp("BLS-TPS", choice) == 0)
		{
			for (int i = 0; i < 6; i++)
			{
				s[i].state = 0;
			}
			printf("all breakers are open\n");
		}
		else if (strcmp("DC1", choice) == 0)
		{
			printf("Open or Close? O/C:");
			scanf("%s", &buf);
			strcpy(state, &buf);
			if (strcmp("O", state) == 0)
			{
				s[2].state = 0;
				printf("%s is open\n", s[2].sName);
			}
			else if (strcmp("C", state) == 0)
			{
				closeUpstream(&s[0], s[3].sName);
				s[2].state = 1;
				printf("%s is closed\n", s[2].sName);
			}
		}
		else if (strcmp("DC2", choice) == 0)
		{
			printf("Open or Close? O/C:");
			scanf("%s", &buf);
			strcpy(state, &buf);
			if (strcmp("O", state) == 0)
			{
				s[3].state = 0;
				printf("%s is opem\n", s[3].sName);
			}
			else if (strcmp("C", state) == 0)
			{
				closeUpstream(&s[0], s[3].sName);
				s[3].state = 1;
				printf("%s is closed\n", s[3].sName);
			}
		}
		else if (strcmp("DC3", choice) == 0)
		{
			printf("Open or Close? O/C:");
			scanf("%s", &buf);
			strcpy(state, &buf);
			if (strcmp("O", state) == 0)
			{
				s[4].state = 0;
				printf("%s is open\n", s[4].sName);
			}
			else if (strcmp("C", state) == 0)
			{
				closeUpstream(&s[0], s[3].sName);
				s[4].state = 1;
				printf("%s is closed\n", s[4].sName);
			}
		}
		else if (strcmp("DC4", choice) == 0)
		{
			printf("Open or Close? O/C:");
			scanf("%s", &buf);
			strcpy(state, &buf);
			if (strcmp("O", state) == 0)
			{
				s[5].state = 0;
				printf("%s is open\n", s[5].sName);
			}
			else if (strcmp("C", state) == 0)
			{
				closeUpstream(&s[0], s[3].sName);
				s[5].state = 1;
				printf("%s is closed\n", s[5].sName);

			}
		}
		else if (strcmp("AC", choice) == 0)
		{
			printf("Open or Close? O/C:");
			scanf("%s", &buf);
			strcpy(state, &buf);
			if (strcmp("O", state) == 0)
			{
				openDownStream(&s[1], s[0].sName);
				s[0].state = 0;
				printf("%s is open\n", s[0].sName);
			}
			else if (strcmp("C", state) == 0)
			{
				s[5].state = 1;
				printf("%s is closed\n", s[0].sName);

			}
		}
		else if (strcmp("DCM", choice) == 0)
		{
			printf("Open or Close? O/C:");
			scanf("%s", &buf);
			strcpy(state, &buf);
			if (strcmp("O", state) == 0)
			{
				openDownStream(&s[2], s[1].sName);
				s[1].state = 0;
				printf("%s is open and all other DC breakers open\n", s[1].sName);
			}
			else if (strcmp("C", state) == 0)
			{
				closeUpstream(&s[0], s[1].sName);
				s[1].state = 1;
				printf("%s is closed\n", s[0].sName);

			}
		}
		else
			printf("This is not one of the options\n");
		for (int i = 0; i < 6; i++)
		{
			printf("%s is at state %d\n", s[i].sName, s[i].state);
		}
		printf("Make another selection? (Y/N):");
		scanf("%s", &sel);
		if (strcmp("N", &sel) == 0)
		{
			cont = 0;
		}
	}
	return 0;
}