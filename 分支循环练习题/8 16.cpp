//1000-2000֮�������
//#include<stdio.h>
//int main() {
//	for (int year = 1000; year < 2001; year++)
//	{
//		if (year%4==0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//
//
//��ӡ100-200֮�������
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int j; 
//	int count = 0;
//	for (int i = 100; i < 201; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//			
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//
//
//
//
//
//
//
//
//1-100�г���9�Ĵ���
//#include<stdio.h>
//int main() {
//	int count = 0;
//	for (int i = 1; i < 101; i++) {
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//
//
//
//�������
//#include<stdio.h>
//int main() {
//	int j = 1;
//	double sum = 0.0;
//	for (int i = 1; i < 101; i++)
//	{
//		sum= sum + j*1.0 / i;
//		j = -j;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}
//
//
//
//�˷��ھ�
//#include<stdio.h>
//int main() {
//	int sum = 0;
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d*%d=%d\t", j,i, sum);
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}
//
//
//
//��10�������е����ֵ
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i;
//	int arr[] = { -1,-2,-3,-4,-55,-6,-8,-7,-9,-10 };
//	int max = arr[0];
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//
//	return 0;
//}
//
//
//
//��������Ϸ	
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game();
//int main() {
//	printf("��������Ϸ\n");
//	int ret;
//	do {
//		printf("���������֣�1����ʼ��0�������");
//		scanf("%d", &ret);
//		switch (ret)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (ret);
//	return 0;
//}
//void game()
//{
//	int Q;
//	srand((unsigned)time(NULL));
//	int rand_num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("��������µ���:>");
//		scanf("%d\n", Q);
//		if (Q > rand_num)
//		{
//			printf("�´���\n");
//		}
//		else if (Q < rand_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//
////������������
//#include<stdio.h>
//void swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main() {
//	int a = 10, b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
