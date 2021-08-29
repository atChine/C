//输入某年某月某日，判断这一天是这一年的第几天？
//#include<stdio.h>
//int  Day(int x,int y,int z)
//{
//    int sum = 0;
//    switch (y)
//    {
//    case 1:sum = 0; break;
//    case 2:sum = 31; break;
//    case 3:sum = 59; break;
//    case 4:sum = 90; break;
//    case 5:sum = 120; break;
//    case 6:sum = 151; break;
//    case 7:sum = 181; break;
//    case 8:sum = 212; break;
//    case 9:sum = 243; break;
//    case 10:sum = 273; break;
//    case 11:sum = 304; break;
//    case 12:sum = 334; break;
//    default:printf("data error"); break;
//    }
//    return sum;
//}
//int main() {
//	int year, mouch, day,sum=0,temp;
//    scanf_s("%d %d %d", &year, &mouch, &day);
//    sum = Day(year, mouch, day);
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))//是否为闰年
//    {
//        temp = 1;
//    }
//    else {
//        temp = 0;
//    }
//    if (temp = 1 && mouch > 2)
//    {
//        sum++;
//    }
// sum=sum+day;
//    printf("这是这一年的第 %d 天。", sum);
//    printf("\n");
//	return 0;
//}


//用数组的方法
//#include<stdio.h>
//int main() {
//	char monthday[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int year, mouch, day, sum = 0;
//	scanf_s("%d %d %d", &year, &mouch, &day);
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))//是否为闰年
//	{
//		monthday[1] = 29;
//	}
//	for (int i = 0; i < mouch-1; i++) {
//		sum = sum + monthday[i];
//	}
//	sum = sum + day;
//	printf("%d\n", sum);
//	return 0;
//}

//输入三个整数x,y,z，请把这三个数由小到大输出
//#include <stdio.h> 
//int main()
//{
//    int arr[3];
//    for (int i = 0; i < 3; i++)
//    {
//        scanf_s("%d", &arr[i]);
//    }
//    int i, j, temp=0;
//    for (j = 0; j < 2; j++)
//    {
//        for (i = 0; i < 2 - j; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                temp = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = temp;
//            }
//        }
//    }
//    printf("排序过后的数顺序:");
//    for (int i = 0; i < 3; i++)
//    {
//        printf("%d " , arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
////# include <stdio.h>
//int main(void)
//{
//    //int a[] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500 };
//    int a[3] ;
//    for (int i = 0; i < 3; i++)
//    {
//        scanf_s("%d", &a[i]);
//    }
//    int n;  //存放数组a中元素的个数
//    int i;  //比较的轮数
//    int j;  //每轮比较的次数
//    int buf;  //交换数据时用于存放中间数据
//    n = sizeof(a) / sizeof(a[0]);  /*a[0]是int型, 占4字节, 所以总的字节数除以4等于元素的个数*/
//    for (i = 0; i < n - 1; ++i)  //比较n-1轮
//    {
//        for (j = 0; j < n - 1 - i; ++j)  //每轮比较n-1-i次,
//        {
//            if (a[j] > a[j + 1])
//            {
//                buf = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = buf;
//            }
//        }
//    }
//    for (i = 0; i < n; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    return 0;
//}


#include<stdio.h>
int main() {
	int temp;
	int arr[5] = { 3,99,6,5,9 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1+i; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	printf("最终排序结果为:\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}