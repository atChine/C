//
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "apple";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}



//求n的阶乘
//#include <stdio.h>
//int Fac1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac1(n - 1);
//	}
//}
//int main() {
//	int n;
//	scanf ("%d", &n);
//	int sum = Fac1(n);
//	printf("n的阶乘为 %d", sum);
//	return 0;
//}

//求第n个斐波那契数列

//int count = 0;
//int my_fb(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if(n > 2)	
//	{
//		return my_fb(n - 1) + my_fb(n - 2);
//	}
//}
//int j = 0, k = 1,ret=1;
//int my_hb(int n)
//{
//	if (n > 2) {
//		for (int i = 3; i <= n; i++)
//		{
//			ret = j + k;
//			j = k;
//			k = ret;
//		}
//		return ret;
//	}
//	if (n == 2 )
//	{
//		return 1;
//	}
//	else if(n==0)
//	{
//		return 0;
//	}
//	
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	/*for (int i = n-2; i <= n; i++)
//	{
//		ret = j + k;
//		j = k;
//		k = ret;
//	}*/
//	ret = my_hb(n);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int i;
//	int j;
//	int m, n, sum = 0, count = 0;
//	scanf("%d %d", &m, &n);
//	for (i = m; i < n + 1; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0)
//				break;
//		}
//		if (i == j) {
//			count++;
//			sum = sum + i;
//		}
//	}
//	printf("%d ", count);
//	printf("%d", sum);
//	return 0;
//}

//青蛙跳
#include<stdio.h>
int my_qw(int n)
{
	int i = 1, j = 2, ret = 0;
	if (n > 2)
	{
		for (int k = 2; k < n; k++)
		{
			ret = i + j;
			i = j;
			j = ret;
		}
		return ret;
	}
	if (n == 2)
		return 2;
	else if (n == 1)
	return 1;
}
int main() {
	int n;
	scanf("%d", &n);
	int ret = my_qw(n);
	printf("%d", ret);
	return 0;
}