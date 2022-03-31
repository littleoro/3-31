#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int max(int* arr,int size) {
//	int i = 0;
//	int max = 0;
//	max = *arr;
//	for (i = 1; i < size; i++) {
//		if (max >= *(arr + i)) {
//			max = max;
//		}
//		else
//			max = *(arr + i);
//	}
//	return max;
//}
//
//int main() {
//	int arr1[] = { 15,4,89,6,5,8,7,4,3,5,2,8,9 };
//	int Max = 0;
//	int a = 0;
//	a = sizeof(arr1) / sizeof(arr1[0]);
//	Max = max(arr1,a);
//	printf("%d\n", Max);
//	return 0;
//}
 

//打印九九乘法表
//void print_table(int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		printf("\n");
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %d ", i, j, (i * j));
//		}
//	}
//}
//int main() {
//	int a = 0;
//	printf("请输入想要打印的乘法口诀表的阶数>");
//	scanf("%d", &a);
//	print_table(a);
//	return 0;
//}
//

//int my_strlen(char* arr) {
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		arr++;
//	}
//	return count;
//}
//void change_arr(char* arr) {
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	char a = arr[left];
//	while (left <= right) {
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//
//}
//
//int main() {
//	char arr[] = "abcdefg";
//	change_arr(arr);
//	printf("%s", arr);
//
//
//	return 0;
//
//}

//int my_strlen(char *arr) {
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void change_arr(char* arr) {
//	char tmp = *arr;
//	int len = my_strlen(arr) - 1;
//	if (len > 0) {
//		*arr = *(arr + len);
//		*(arr + len) = '\0';
//
//		change_arr(arr + 1);
//	}
//	*(arr + len) = tmp;
//
//}
//
//int main() {
//	char arr[] = "adc";
//	change_arr(arr);
//	printf("%s", arr);
//
//
//	return 0;
//
//}
//
//
//int calcuate(int x) {
//	if (x != 0) {
//		int y = 0;
//		y = x % 10;
//		return y + calcuate(x / 10);
//	}
//	else
//		return 0;
//}
//
//
//int main(){
//	int a = 0;
//	printf("输入你想计算的数字>");
//	scanf("%d", &a);
//	int b=calcuate(a);
//	printf("%d", b);
//
//	return 0;
//
//}

//int multiple(int n,int k) {
//	if (k-1 >0) {
//		return n * multiple(n, k - 1);
//	}
//	else
//		return n;
//}
//
//
//int main() {
//	int n = 0;
//	int k = 0;
//	printf("请输入n>");
//	scanf("%d", &n);
//	printf("请输入k>");
//	scanf("%d", &k);
//	int a = multiple(n, k);
//	printf("n的k次方>%d", a);
//	return 0;
//}