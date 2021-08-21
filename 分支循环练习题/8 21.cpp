#include<stdio.h>
int main() {
	short a = 0;
	int b = 3;
	int v = 0;
	printf("%d\n", sizeof(a = b + 5));
	printf("%d", a);
	printf("%d", v);
	return 0;
}