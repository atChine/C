//����
//#include<stdio.h>
//int main() {
//	int ch[] = {1,2,3,4,5,6,7,8,9,10,88};
//	int n = 8;
//	int sz = sizeof(ch)/sizeof(ch[0]);
//	for (int i = 0; i < sz;i++) {
//		if (ch[i] == n) {
//			printf("�����ֵ��±�Ϊ%d", i);
//			break;
//		}
//		else if (i==sz) {
//			printf("û�д���\n");
//		}
//
//	}
//	return  0;
//}
//���ַ�
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
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		}
		
	}
	if (right>left) {
		printf("û�������\n");
	}
	
	return 0;
}