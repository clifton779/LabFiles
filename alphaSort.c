#include <stdio.h>
#include <strings.h>
#include <ctype.h>
void sort_alphabetic(char **p, int n, char token);
int main()
{
	//Strings to be sorted, placed in array of pointers to strings
	char *array[8] = {"Systems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};
	int length = 8, i;// Length of array and loop counter
	char **ap = array;//Pointer to array of char pointers
	char token; //Storage for user input to choose sort direction
	printf("Enter A to sort in alphabetical order or D to sort in reverse order\n");
	scanf("%c", &token);
	token = toupper(token);//Token to determine direction of sort
	if (token == 'A' || token == 'D') //Check to make sure input is valid
	{
		sort_alphabetic(ap, length, token); //Sort function
	} else
	{
		printf("Invalid input\n");
	}
	for (i = 0; i < length; i++) //Print sorted strings, or original order if invalid input
	{
		printf("%s\n", *(array + i));
	}
	return 0;
}
void sort_alphabetic(char **p, int n, char token)
{	
	char *temp; //temp storage for pointers for swap
	int i, j;
	for (i = 0; i < n; i++) //starting from first element in pointer array
	{
		for (j = i + 1; j < n; j++)//starting from second element in pointer array
		{
			if (token == 'A')//Sorting in ascending order
			{
			//strcasecmp case insensitive
				if (strcasecmp( *(p + i), *(p + j)) > 0)//If first string has larger value than second string, swap
				{
					temp = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = temp;
				}
			}else if (token == 'D') //Sorting in descending order
			{
				if (strcasecmp( *(p + i), *(p + j)) < 0)//if first string has smaller value than second string, swap
				{
					temp = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = temp;
				}
			}
		}
	}
}  
