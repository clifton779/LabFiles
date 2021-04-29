#include <stdio.h>
#include <string.h>
// prototype of swap functiomns
void swap(char *p, char *q);
int main()
{
	// initialize variables
	char str1[100], str2[100], str1c[100], str2c[100];
	int len1, len2, i = 0, j = 0, k = 0;
	char *p, *q;
	// get input strings
	printf("Enter string 1: ");
	scanf("%s", str1);
	len1 = strlen(str1);
	printf("Enter string 2: ");
	scanf("%s", str2);
	len2 = strlen(str2);
	// get copies of input stringz so loop has a blueprint
	strcpy(str1c, str1);
	strcpy(str2c, str2);
	// loop to swap letters and numbers in strings based on the original locations in the copies
	for (i = 0; i < len1; i++)
	{
		if (str1c[i] >= '0' && str1c[i] <= '9')
		{
			if (j == len2)
			{
				str1[i] = ' ';
			}
			for (j; j < len2; j++)
			{
				if (str2c[j] >= 'A' && str2c[j] <= 'Z' || str2c[j] >= 'a' && str2c[j] <= 'z')
				{
					p = &str1[i], q = &str2[j];
					swap(p, q);
					j++;
					break;
				}
			}
		}
		if (str1c[i] >= 'A' && str1c[i] <= 'Z' || str1c[i] >= 'a' && str1c[i] <= 'z')
		{
			if (k == len2)
			{
				str1[i] = ' ';
			}
			for (k; k < len2; k++)
			{
				if (str2c[k] >= '0' && str2c[k] <= '9')
				{
					p = &str1[i], q = &str2[k];
					swap(p, q);
					k++;
					break;
				}
			}
		}
		
	}
	// print new strings				
	printf("String 1 is now %s and String 2 is %s.\n", str1, str2);
	return 0;
	
}

void swap(char *p, char *q)
{
	// swap entries in different arrays without temp
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
}

