#include <stdio.h>

int main(){
	char str[100], ch;
	printf("Input : ");
	gets(str);
	printf("Eliminate Character : ");
	scanf("%c", &ch);

	for (int i = 0; str[i] != '\0'; i++){
		if (str[i] == ch){
			for (int j = i; str[j] != '\0'; j++){
				str[j] = str[j + 1];
			}
			i--;
		}
	}

	printf("Output : %s", str);
	return 0;
}
