#include <stdio.h>
// create structure to hold dialing codes
struct country_code {
	char *country;
	int code;
};

void findCode(int input, int length, struct country_code *p);
int main()
{
	int intl_code;
	// create array of country codes
	struct country_code codes[] = 
	{{"Argentina", 54}, {"Bangladesh", 880}, {"Brazil", 55}, {"Burma (Myanmar)", 95}, {"China", 86}, {"Colombia", 57}, {"Congo, Dem. Rep. of", 243}, {"Egypt", 20}, {"Ethiopia", 251}, {"France", 33}, {"Germany", 49}, {"India", 91}, {"Indonesia", 62}, {"Iran", 98}, {"Italy", 39}, {"Japan", 81}, {"Mexico", 52}, {"Nigeria", 234}, {"Pakistan", 92}, {"Philippines", 63}
	};
	// find number of entries in array
	int codesLength = sizeof(codes) / sizeof(*codes);
	printf("Enter international code: ");
	scanf("%d", &intl_code);
	// finds code in array and prints country
	findCode(intl_code, codesLength, codes);
	return 0;
}

void findCode(int input, int length, struct country_code *p)
{
	int i, found = 0;
	//traverses the array of country codes
	for (i = 0; i < length; i++)
	{
		// if the input matches a country code in array, print counrty
		if (p[i].code == input)
		{
			printf("The country is %s\n", p[i].country);
			found = 1;
		}
	}
	// if no country code matches input, print response
	if (found == 0)
	{
		printf("Code not found.\n");
	}
}
