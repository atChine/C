
//int main() {
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* prr[3] = { &a,&b,&c };
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", *prr[i]);
	//}
	////printf("%d\n", *prr);

	//------------------ָ������------------------------------
	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int* parr[] = { arr1,arr2 };        //��������ַ������ָ��
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}*/


	//����ָ��
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
int Max(int, int);  //��������
int main(void)
{
	int(*p)(int, int);  //����һ������ָ��
	int a, b, c;
	p = Max;  //�Ѻ���Max����ָ�����p, ʹpָ��Max����
	printf("please enter a and b:");
	scanf("%d%d", &a, &b);
	c = (*p)(a, b);  //ͨ������ָ�����Max����
	printf("a = %d\nb = %d\nmax = %d\n", a, b, c);
	return 0;
}
int Max(int x, int y)  //����Max����
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