#include<stdio.h>
#include <stdlib.h>
int main() {
	struct student {
		char name[20];
		int age;
		char sex;
		float score;
	};
	struct student stu1,*s_p;
	stu1 = { "cuienjie",25,'m',88 };
	s_p = &stu1;

	printf("������%s\n���䣺%d\n�Ա�%c\n������%f\n",\
		stu1.name,stu1.age,stu1.sex,stu1.score); 
	printf("������%s\n���䣺%d\n�Ա�%c\n������%f\n", \
		(*s_p).name, (*s_p).age, (*s_p).sex, (*s_p).score);
	printf("������%s\n���䣺%d\n�Ա�%c\n������%f\n", \
		s_p->name, s_p->age, s_p->sex, s_p->score);

	struct student *sa_p,stu_arr[3] = { {"cuienjie",25,'m',88} ,{"zhangsan",28,'m',50}, {"lisi",30,'m',25} };
	sa_p = stu_arr;

	for (int i = 0; i < 3; i++) {
		printf("������%s\n���䣺%d\n�Ա�%c\n������%f\n", \
			(sa_p +i)->name, (sa_p + i)->age, (sa_p + i)->sex, (sa_p + i)->score);
	}
	
	char str[10] = "123";

	enum color {
		red,
		yellow,
		bule,
		black
	};
	enum color a = black, b=red;
	if (a < b) {
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}



	int *p,i;
	printf("������Ҫ������ڴ��С��");
	scanf_s("%d", &i);

	p = (int *)malloc(i*sizeof(int));
	if (p == NULL) {
		printf("�ڴ����ʧ��");
	}else {
		printf("�ڴ����ɹ�\n");
		for (int j = 0; j < i; j++) {
			p[j] = j;
		}
	}
	for (int j = 0; j < i; j++) {
		printf("�����ڴ��е�����Ϊ��%d\n",p[j]); 
	}

	return 0;
}