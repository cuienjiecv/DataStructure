#include<stdio.h>
#define cui "maomao"
#define age 25
int main()
{
	printf("hello world\n");
	printf("%s����%d����\n",cui,age);
	int a = 10;
	char b = 'b';
	short c = 1;
	printf("int�ĳ���Ϊ%d,char�ĳ���Ϊ%d,short�ĳ���Ϊ%d\n",\
		sizeof(a),sizeof(b), sizeof(c));
	printf("b��ASCII����ʮ������%d\n", b);
	char d[] = "cuimaomao";
	printf("%s\n", d);
	printf("�������%d\n", 1 + (int)2.0);
	printf("���������%f\n", 1 + 2.0);
	printf("%d", a > c);

	int student_age;
	printf("���������䣺");
	scanf_s("%d", &student_age);
	if (student_age >= 18 && student_age <=50) {
		printf("������ϣ����");
	}
	else if(student_age>50)
	{
		printf("����̫�󣬲��������");
	}
	else
	{
		printf("����̫С�����������");
	}



	return 0;
}
