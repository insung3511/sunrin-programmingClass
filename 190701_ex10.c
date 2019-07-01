#include <stdio.h>

int main() {
	int juno = 100;
	int sangin = 200;
	printf("준오집 주소 : %d, 암호 : %d\n", &juno, juno);
	printf("상인집 주소 : %d, 암호 : %d\n", &sangin, sangin);
	
	int *mingi = '\n';
	mingi = &juno;
	*mingi = *mingi * 3;
	printf("밍이가 방문 하는 곳 주소 : %d, 암호 : %d\n", mingi, *mingi);
	
	mingi = &sangin;
	*mingi = *mingi * 3;
	printf("밍이가 방문 하는 곳 주소 : %d, 암호 : %d\n", mingi, *mingi);
	return 0;
}
