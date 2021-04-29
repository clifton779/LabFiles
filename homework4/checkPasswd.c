// header files
#include <stdio.h>
#include <string.h>
//function prototypes
void checkLen(int *p, int len);
void checkLower(int *p, char array[], int len);
void checkUpper(int *p, char array[], int len);
void checkNum(int *p, char array[], int len);
void checkCon(int *p, char array[], int len);
//main
int main()
{
	//declare variables
	char ch[100];
	int len, pnt;
	// input password
	printf("Enter a password: ");
	scanf("%s", ch);
	len = strlen(ch);
	pnt = 0;
	// check password length less than 10
	checkLen(&pnt, len);
	// check existance of lowercase
	checkLower(&pnt, ch, len);
	// check existance of uppercase
	checkUpper(&pnt, ch, len);
	// check existance of numbers
	checkNum(&pnt, ch, len);
	// check existance of 3 or more consecutive characters
	checkCon(&pnt, ch, len);
		// check point deduction
	if (pnt > 30) // if greater than 30 points
	{
		// display total deduction
		printf("Dedeuctions: %d \nThe password is unsafe! Please reset.\n", pnt);
	} else //if less than 30 points
	{
		//display safe string
		printf("Deductions: %d \nThe password is safe.\n", pnt);
	}
	return 0;
}
void checkLen(int *p, int len)
{
// check password length less than 10
	int new_len;
	if (len < 10)
	{
		new_len = 10 - len;
		// assign point deductions
		*p += 5 * new_len;
	} else // if password length > 10, no deductions.
	{
		*p += 0;
	}
}
// check whether missing lowercase letter
void checkLower(int *p, char array[], int len)
{
	int i, lower_count = 0;
	// traverse array and check if lowercase exists
	for (i = 0; i < len; i++)
	{
		if (array[i] >= 'a' && array[i] <= 'z')
		{
			lower_count += 1;
		}
	}
	// if a lower case letter does not exist, add 20 to deductions
	if (lower_count <= 0)
	{
		*p += 20;
	}
}
void checkUpper(int *p, char array[], int len)
{
	int i, upper_count = 0;
	// check existance of upper case letters
	for (i = 0; i < len; i++)
	{
		if (array[i] >= 'A' && array[i] <= 'Z')
		{
			upper_count += 1;
		}
	}
	// if upper case letter does not exist, add 20 to deductions
	if (upper_count <= 0)
	{
		*p += 20;
	}
}
void checkNum(int *p, char array[], int len)
{
	int i, num_count = 0;
	// check existance of numbers
	for (i = 0; i < len; i++)
	{
		if (array[i] >= '0' && array[i] <= '9')
		{
			num_count += 1;
		}
	}
	// if numbers does not exist, add 20 to deductions
	if (num_count <= 0)
	{
		*p += 20;
	}
}
void checkCon(int *p, char array[], int len)
{
	int i, con_count = 0;
	// check that for every character in string, the next 2 characters are not the next 2 consecutive characters
	for (i = 0; i < len - 2; i++)
	{
		if (array[i + 1] - array[i] == 1 && array[i + 2] - array[i + 1] == 1)
		{
			con_count += 1;
		}
	}
	// if 3 consecutive characters, add 20 to deductions
	if (con_count > 0)
	{
		*p += 20;
	}
}  	
