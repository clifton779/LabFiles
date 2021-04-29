#include <stdio.h>
#include <string.h>

int main()
{
	char smallest[100], largest[100], temp[100];
	int i = 0;
	while(1)
	{
		printf("Enter word: ");
		scanf("%s", temp);
		if (i == 0)
		{
			strcpy(smallest, temp);
			strcpy(largest, temp);
		} else
		{
			if (strcmp(temp, smallest) <= 0)
			{
				strcpy(smallest, temp);
			}
			if (strcmp(temp, largest) >= 0)
			{
				strcpy(largest, temp);
			}
		}
		if (strlen(temp) == 4)
		{
			break;
		}
		i++;
	}
	printf("\nSmallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);
}
