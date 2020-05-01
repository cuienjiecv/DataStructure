#include<stdio.h>
int get_Max(int, int);
int get_Min(int, int);

int main() {
	int a, b, c;
	printf("请输入两个数字：");
	scanf_s("%d %d", &a, &b);

	int (*p)(int, int);// 定义函数指针
	p = get_Max;
	printf("最大数是：%d\n",(*p)(a,b));
	p = get_Min;
	printf("最小数是：%d\n", (*p)(a, b));

	return 0;
}

int get_Max(int x, int y) {
	int result;
	result = x > y ? x : y;
	return result;
}

int get_Min(int x, int y) {
	int result;
	result = x < y ? x : y;
	return result;
}