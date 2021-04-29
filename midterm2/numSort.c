#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sort_numeric(float *p, char token, int length);
void swap(float *p, float *q);
int main()
{
	//The array to be sorted
	float array[] = {10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.99, -2, -5, -109.56};
	float *ap;
	ap = array; //Pointer to the array
	int length = sizeof(array) / sizeof(float); //General code to find length of array
	int loop; //loop counter
	char token; //Token to store user input
	printf("Enter A to sort array in ascending order, D to sort in descending order.");
	scanf("%c", &token);
	token = toupper(token); //Token to determine whether array is sorted in ascending or descending order
	if (token == 'A' || token == 'D')
	{
		sort_numeric(ap, token, length); //Sort function, using a pointer to traverse array
	} else
	{
		printf("Input invalid\n"); //If neither sort option was chosen
	}
	int i;
	for (i = 0; i < length; i++)
	{
		printf("%g ", array[i]); //Print sorted array, or original array if in error.
	}
	printf("\n");//Move to new line after printing array
	return 0;
}
void sort_numeric(float *p, char token, int length)
{	
	//bubble sort of array
	int i, j;
	for (i = 0; i < length; i++) //Starting from the first entry and working forawrds
	{
		for (j = 0; j < length; j++) //Starting from the second entry and working forwardds
		{	
			if (token == 'A') //If sorting in ascending order
			{
				if ( *(p + j) > *(p + i)) //compare two elements, and swap if first element is larger than second
				{
					swap(p + j, p + i);
				} 
			} else if (token == 'D') //If sorting in descending order
			{
				if ( *(p + j) < *(p + i)) //Compare two elements, and swap if first element is smaller than second
				{
					swap(p + j, p + i);
				}
			}
		}
	}
}
void swap(float *p, float *q)
{
// General purpose swap function using pointers
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
} 
