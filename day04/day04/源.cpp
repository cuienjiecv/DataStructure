#include<stdio.h>
int get_Max(int, int);
int get_Min(int, int);

int main() {
	int a, b, c;
	printf("�������������֣�");
	scanf_s("%d %d", &a, &b);

	int (*p)(int, int);// ���庯��ָ��
	p = get_Max;
	printf("������ǣ�%d\n",(*p)(a,b));
	p = get_Min;
	printf("��С���ǣ�%d\n", (*p)(a, b));

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