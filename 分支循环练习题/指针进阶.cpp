
//int main() {
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* prr[3] = { &a,&b,&c };
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", *prr[i]);
	//}
	////printf("%d\n", *prr);

	//------------------指针数组------------------------------
	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int* parr[] = { arr1,arr2 };        //存放数组地址的数组指针
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}*/


	//数组指针
	//int arr1[5] = { 1,2,3,4,5 };
	//int(*p)[5] = &arr1;
	//for (int i = 0; i < 5; i++)
	//{
	//	//printf("%d ",arr1[i]);
	//	printf("%d ", (*p)[i]);
//	//}
//#include<stdio.h>
//int i = 0;
//int j = 0;
//void print1(int(*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			//printf("%d ",*((*p+i)+j));
//			//printf("%d ",(*p+i)[j]);
////			printf("%d %d",(*p+i)[j] );
////		}
////		printf("\n");
//	}
//}
//	int main(){
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}


# include <stdio.h>
int Max(int, int);  //函数声明
int main(void)
{
	int(*p)(int, int);  //定义一个函数指针
	int a, b, c;
	p = Max;  //把函数Max赋给指针变量p, 使p指向Max函数
	printf("please enter a and b:");
	scanf("%d%d", &a, &b);
	c = (*p)(a, b);  //通过函数指针调用Max函数
	printf("a = %d\nb = %d\nmax = %d\n", a, b, c);
	return 0;
}
int Max(int x, int y)  //定义Max函数
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}