//遍历
//#include<stdio.h>
//int main() {
//	int ch[] = {1,2,3,4,5,6,7,8,9,10,88};
//	int n = 8;
//	int sz = sizeof(ch)/sizeof(ch[0]);
//	for (int i = 0; i < sz;i++) {
//		if (ch[i] == n) {
//			printf("此数字的下边为%d", i);
//			break;
//		}
//		else if (i==sz) {
//			printf("没有此数\n");
//		}
//
//	}
//	return  0;
//}
//二分法
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,88 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz-1;
	
	int k;
	scanf("%d", &k);
	while (left<=right) {
		int mid = (left + right) / 2;
		if (arr[mid] > k) {
			right = mid - 1;
		}if (arr[mid] < k) {
			left = mid + 1;
		}
		if(arr[mid]==k)
		{
			printf("找到了，下标为%d\n", mid);
			break;
		}
		
	}
	if (right>left) {
		printf("没有这个数\n");
	}
	
	return 0;
}