//#include<stdio.h>
//#include<string.h>
//int main() {
//	int a, b, c, max;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a<b)
//	{
//		max = b;
//		b = a;
//		a = max;
//	}if (a<c)
//	{
//		max = c;
//		c = a;
//		a = max;
//	}
//	if (b<c)
//	{
//		max = c;
//		c = b;
//		b = max;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}




//1-100中3的倍数
//#include<stdio.h>
//int main() {
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//两个数的最大公约数
//#include<stdio.h>
//int main() {
//	int a, b, temp;
//	scanf("%d %d", &a, &b);
//	while (a%b!=0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//
//	}
//	printf("%d", b);
//	return 0;
//}


//1．编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小写字母
//然后打印数组的所有内容。
//#include<stdio.h>
//int main() {
//	char ch;
//	for (ch= 'a'; ch <= 'z'; ch++)
//	{
//		printf("%c", ch);
//	}
//	return 0;
//}



//．使用嵌套循环，按下面的格式打印字母：
#/*include<stdio.h>
int main(void) {
	int i, j;
	for ( i = 1; i < 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
*/


//3．使用嵌套循环，按下面的格式打印字母：
//#include<stdio.h>
//int main() {
//	char ch;
//	for (int i = 1; i < 7; i++)
//	{
//		for (int n = 1, ch = 'F'; ch >= 'A' && n <= i; ch--, n++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//4.使用嵌套循环，按下面的格式打印字母：
#/*include<stdio.h>
int main() {
	int i, j;
	char ch = 'A';
	for (i = 0; i < 6; i++)
	{
		ch = ch + i;
		for (j = 0; j <= i; j++)
		{
			printf("%c", ch + j);
		}
		printf("\n");

	}
	return 0;
}*/




//6．编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立
//方。要求用户输入表格的上下限。使用一个for循环。
//#include<stdio.h>
//int  aquare(int m);
//int cube(int m);
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("----------------------\n");
//	for (int i = 5; i < 5 + n; i++) {
//		printf("|%6d|%6d|%6d|\n", i, aquare(i), cube(i));
//		printf("----------------------\n");
//	}
//	return 0;
//}
//int  aquare(int m)
//{
//	return m * m;
//}
//int cube(int m)
//{
//	return m * m * m;
//}
//输出结果
//----------------------
//| 5 | 25 | 125 |
//----------------------
//| 6 | 36 | 216 |
//----------------------
//| 7 | 49 | 343 |
//----------------------
//| 8 | 64 | 512 |
//----------------------
//| 9 | 81 | 729 |
//----------------------






//7．编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。提
//示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标。
#include<stdio.h>
#include<string.h>
int main() {
	char ch[20];
	scanf("%s", ch);
	int sz = strlen(ch);
	for (sz; sz >= 0; sz--)
	{
		printf("%c", ch[sz]);
	}
	return 0;
}
