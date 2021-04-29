#include <stdio.h>
#include <string.h>
int checkPal(char *p, int len);
int main()
{
	char input[100];
	int len, flag;
	// prompt user for string
	printf("Enter a string: ");
	scanf("%s", input);
	// find length of string
	len = strlen(input);
	// sets flag to 1 if palindrome, 0 if not a palindrome
	flag = checkPal(input, len);
	//prints results
	if (flag == 1)
	{
		printf("String is a palindrome\n");
	} else
	{
		printf("String is not a palindrome\n");
	}
}
int checkPal(char *p, int len)
{
	int i;
	// traverses string
	for (i = 0; i < len; i++)
	{
		// for every character i, if character len - 1 - i is not the same, then not a palindrome
		if (p[i] != p[len - i - 1])
		{
			// returns 0 if not a palindrome
			return 0;
		}
	}
	//returns 1 if a palindrome
	return 1;
}
