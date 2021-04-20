#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void sort_numeric(float *p, char token, int length);
void swap(float *p, float *q);
int main()
{
	//Since length of array is undetermined, number of entries must be defined by user
	int length;
	printf("Enter number of entries in array.\n");
	scanf("%d", &length);//Defines number of entries in array
	float *array;
	array = malloc(length * sizeof(float));//Allocates memory space sufficient for # of float object equal to length input by user
	if (array == NULL)
	{
		printf("Allocation failed");
		return 0;
	}//Checks that memory space was allocated
	printf("Enter values\n");
	int i;
	for (i = 0; i < length; i++)
	{
		scanf("%f", (array + i));
	}//Gets and stores data in array
	printf("\n");
	char token;//Stores user input for sort direction
	printf("Enter A to sort array in ascending order, D to sort in descending order.");
	scanf(" %c", &token);
	token = toupper(token);
	float *ap;
	ap = array;//Second pointer to allocated memory space, acts a seperate pointer to the array
	if (token == 'A' || token == 'D')//Checks user imput was valid
	{
		sort_numeric(array, token, length);//Sort function
	} else
	{
		printf("Input invalid\n");
	}
	for (i = 0; i < length; i++)//Prints sorted array, or original array if input was invalid
	{
		printf("%g ", *(array + i));
	}
	printf("\n");
	free(array);//Frees allocated memory space
	return 0;
}
void sort_numeric(float *p, char token, int length)
{	
	int i, j;//Loop counters
	for (i = 0; i < length; i++)//Starting from first entry in array
	{
		for (j = 0; j < length; j++)//Starting from first entry in array
		{	
			if (token == 'A')//If ascening order
			{
				if ( *(p + j) > *(p + i))//If first entry larger than second entry, swap
				{
					swap(p + j, p + i);//Swap function for pointers
				} 
			} else if (token == 'D')//If descending order
			{
				if ( *(p + j) < *(p + i))//If first entry smaller than second entry, swap
				{
					swap(p + j, p + i);//Swap function for pointer
				}
			}
		}
	}
}
void swap(float *p, float *q)
{
	//swap function for pointers without use of temp
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
} 
