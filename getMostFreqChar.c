#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, arr[26] = {0}, index, Max;
	char str[1000];
	printf("Enter string: ");
	gets(str);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <='z')
		{
			arr[str[i] - 'a']++;
		}
	}	
	Max = arr[0];
	for (i = 1; i < 26; i++)
	{
		if(arr[i] > Max)
		{
			Max = arr[i];
			index = i;
		}
	}
	printf("The Most frequent letter is %c. It appeared %d times.", (char)index + 97, arr[index]);
	return 0;
}
