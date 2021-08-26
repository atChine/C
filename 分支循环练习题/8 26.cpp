#include <stdio.h>
#include<string.h>

	/*const char* str1 = "abcdef";
	const char* str2 = "bbb";
	printf("strlen(str1)=%d\n", strlen(str1));
	printf("strlen(str2)=%d\n", strlen(str2));
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}*/
void bubble_sort(int arr[] ,int sz)
{
	
	for (int i=0; i < sz-1; i++)
	{
		//一趟冒泡排序
		
		for (int j=0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}
}
struct stu
{
	char name[20];
	int age;
};
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct stu s[3] = { {"张三",20},{"李四",19},{"王五",21} };
	bubble_sort(arr, sz);//冒泡排序
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}