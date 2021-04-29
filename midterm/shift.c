#include <stdio.h>

int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	printf("Original integer: %d\n", n);
	int new = (n<<3) + ~n;

	printf("New integer: %d\n", new);
}
