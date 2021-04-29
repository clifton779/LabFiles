#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct entry{
	char fname[10];
	char lname[10];
	char bday[11];
	char sex[3];
	char dose[2];
	char pdose[11];
	char type[15];
	char zip[6];
	char age[3];
	char code[9];
};
void regis(struct entry *newentry);
void genr(struct entry *newentry);
void retrieve(char code[], struct entry database[]);
int main()
{
	struct entry database[10];
	int i;
	for (i = 0; i < 10; i++)//Initialize entries in the array to empty strings
	{
		database[i].fname[0] = '\0';
	}
	char token;
	char exit = 'A';
	while (exit != 'Q')
	{
		printf("(R)egister (V)iew (Q)uit\n");
		scanf(" %c", &token);
		token = toupper(token);
		int i;
		switch(token)
		{
			case 'Q':
				exit = 'Q';	
				break;
			case 'R':
				for (i = 0; i < 10; i++)
				{
					if (database[i].fname[0] == '\0')
					{
						struct entry *newentry;
						newentry = &database[i];
						regis(newentry);
						genr(newentry);
						break;
					}
				}
				if (i == 10)
				{
					printf("Database is full");
				}
				break;
			case 'V':
				printf("Enter code of entry to retrieve.\n");
				char codeC[9];
				scanf("%s", &codeC);
				retrieve(codeC, database);
				break;
			default :
				printf("Invalid input entered\n");
				token = ' ';
				break;
		}
	}
}
void regis(struct entry *newentry)
{
	printf("Enter first name.\n");
	scanf("%s", newentry->fname);
 	printf("Enter last name.\n");
	scanf("%s", newentry->lname);
	printf("Enter gender. (M)ale (F)emale N/A\n");
	scanf("%s", newentry->sex);
	printf("Enter birthday mm/dd/yyyy\n");
	scanf("%s", newentry->bday);
	printf("Enter 2 digit age.\n");
	scanf("%s", newentry->age);
	printf("Enter dose number\n");
	scanf("%s", newentry->dose);
	printf("Enter date of previous dose, or N/A if no previous dose.\n");
	scanf("%s", newentry->pdose);
	printf("Enter name of vaccine.(Pfizer, Moderna, Johnson&Johnson)\n");
	scanf("%s", newentry->type);
	printf("Enter zip code.\n");
	scanf("%s", newentry->zip);
}
void genr(struct entry *newentry)
{
	newentry->code[0] = newentry->fname[0];
	newentry->code[1] = newentry->lname[0];
	newentry->code[2] = newentry->age[0];
	newentry->code[3] = newentry->age[1];
	newentry->code[4] = newentry->type[0];
	newentry->code[5] = newentry->zip[2];
	newentry->code[6] = newentry->zip[3];
	newentry->code[7] = newentry->zip[4];
	newentry->code[8] = '\0';
	printf("%s\n", newentry->code);
}
void retrieve(char code[], struct entry database[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (strcmp(database[i].code, code) == 0)
		{
			printf("First Name: %s\nLast Name: %s\nBirthday: %s\nAge: %s\nGender: %s\nDose #: %s\nDate of Previous Dose: %s\nDose Type: %s\nZip: %s\nReference Code: %s\n", database[i].fname, database[i].lname, database[i].bday, database[i].age, database[i].sex, database[i].dose, database[i].pdose, database[i].type, database[i].zip, database[i].code);
			break;
		}
	}
}	
