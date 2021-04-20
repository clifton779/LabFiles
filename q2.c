#include <stdio.h>

int main() {

	int letters;
	int words;
	char character;
	int space;

	printf("Enter a sentence: ");

	while((character=getchar()) != '\n') {
		if(character != ' ') {
			if(!space) {
				words++;
				space=1;
			}
			letters++;
		}else
			space = 0;
	}
	words++;
	printf("Average word length : %.1f", (float)letters/(float)words);

	return 0;
}
