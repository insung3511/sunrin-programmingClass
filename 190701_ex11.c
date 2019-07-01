#include <stdio.h>

int main() {
	int a[3] = { 10, 20, 30 };
	int *p = a;
	for (int i = 0; i < 3; i++) {
		printf("  배열 a[%d]의 값 : %d\n", i, a[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("포인터 p[%d]의 값 : %d\n", i, p[i]);
	}
	p[0] = 100;
	p[1] = 200;
	p[2] = 300;
	printf("###########################\n");
	for (int i = 0; i < 3; i++) {
		printf("  배열 a[%d]의 값 : %d\n", i, a[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("포인터 p[%d]의 값 : %d\n", i, p[i]);
	}

	printf("a자체의 값 : %d\n", a);
	printf("a[0]의 주소 : %d\n", &a[0]);
	printf("a자체의 값이 가지는 주소의 실제 값 : %d\n", *a);
	printf("a[0]의 주소가 가리키는 실제 값 : %d\n", &a[0]);
	return 0;
}
