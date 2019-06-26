#include <stdio.h>

int main() {
	char str[100], ch = { '\n' };
	char *s, *t;
	int i, j;
	printf("Input : ");
	gets(str);
	printf("Eliminate Character : ");
	scanf("%c", &ch);
	s = str;
	for (i = 0; *(s + i) != '\0'; i++) {
		if (*(s + i) == ch) {
			for (j = i; *(s + j) != 0; j++) {
				*(s + j) = *(s + j + 1);
			}	i--;
		}
	}
	printf("Output : %s\n", str);
	return 0;
}
