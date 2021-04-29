#include <stdio.h>

char *strcpy(char *strDest, const char *strSrc)
{
	int i = 0;
	while (strSrc[i] != 0)
	{
		strDest[i] = strSrc[i];
		i++;
	}
	strDest[i] = 0;
	return strDest;
}

int main()
{
	char str[100] = "Test copy test";
	char dst[100];
	strcpy(dst, str);
	printf("dst is %s\n", dst);
	return 0;
}
