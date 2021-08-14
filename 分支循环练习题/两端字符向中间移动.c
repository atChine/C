#include<stdio.h>
#include<string.h>
int main() {
	char arr1[] = "hello world";
	char left = 0;
	char right = sizeof(arr1) / sizeof(arr1[0])-2;
	char arr2[] = "###########";
	while (left<=right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		printf("%s\n", arr2);
		right--;
		left++;
	}
	return 0;
}