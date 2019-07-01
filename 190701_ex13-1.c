#include <stdio.h>

int main() {
	char a[100], b[100] = { '\n' };
	
	printf("Input1 : ");
	gets(a);

	printf("Input2 : ");
	gets(b);

	strcat(a, b);
	printf("Output : ");	puts(a);
	return 0;
}
