#include<stdio.h>
#define cui "maomao"
#define age 25
int main()
{
	printf("hello world\n");
	printf("%s今年%d岁了\n",cui,age);
	int a = 10;
	char b = 'b';
	short c = 1;
	printf("int的长度为%d,char的长度为%d,short的长度为%d\n",\
		sizeof(a),sizeof(b), sizeof(c));
	printf("b的ASCII编码十进制是%d\n", b);
	char d[] = "cuimaomao";
	printf("%s\n", d);
	printf("整型输出%d\n", 1 + (int)2.0);
	printf("浮点型输出%f\n", 1 + 2.0);
	printf("%d", a > c);

	int student_age;
	printf("请输入年龄：");
	scanf_s("%d", &student_age);
	if (student_age >= 18 && student_age <=50) {
		printf("年龄符合，请进");
	}
	else if(student_age>50)
	{
		printf("年龄太大，不允许进入");
	}
	else
	{
		printf("年龄太小，不允许进入");
	}



	return 0;
}
