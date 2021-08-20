#include <stdio.h>
int main() {
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,0,11 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n%d", sz);*/
	int a = 3;
	int b = 5;
	printf("bofore:a=%d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after:a=%d b=%d\n", a, b);
	return 0;
}