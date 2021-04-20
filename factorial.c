#include <stdio.h>
int main()
{
	int n;
	printf("Enter a positive number: ");
	scanf("%d", &n);;
	int i;
	for (i = n -1; i >= 1; i--)
	{
		n = n *i;
	}
	printf("%d\n",n);
	return 0;
}
