#include <stdio.h>
#include <string.h>

int main() {
	char a[30] = "Sunrin Internet High School";
	char *p = strstr(a, "net");
	printf("%s\n", p);
	while (p != NULL) { 
	printf("%s\n", p);
	p = strstr(p + 1, "in");

	}
	return 0;
}
