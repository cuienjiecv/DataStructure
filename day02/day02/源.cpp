#include<stdio.h>
#include<string.h>
#define num 3

int v, s1, s2, s3;
void getVS(int l, int w, int h) {
	v = l * w * h;
	s1 = l * w;
	s2 = l * h;
	s3 = w * h;
}

void self_Sum() {
	static int i = 1;
	i += 1;
	printf("%d\n", i);
}

void swap(int *p1, int *p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {

	int arr[] = { 1,2,3,4 }, *p;
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		printf("地址：%X,索引：%d,元素：%d\n", &arr[i], i, arr[i]);
	}
	p = arr;
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		printf("地址：%X,索引：%d,元素：%d\n", p + i, i, *(p+i));
	}

	int arr2[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	printf("%X,%X,%X\n", arr2, arr2 + 1, arr2 + 2);
	printf("%X,%X,%X\n", *arr2, *arr2 + 1, *arr2 + 2, *arr2 + 3);

	//printf("%X,%X,%X\n", *arr2, *(arr2+1), *(arr2+2));
	//printf("%X,%X,%X\n", arr2[0], arr2[1], arr2[3]);

	int *p1;
	for (p1 = *arr2; p1 < *arr2 + 3 * 4; p1++) {
		printf("%X,%d\n", p1, *p1);
	}

	int (*p3)[4];
	//p2 = *arr2;
	p3 = arr2;

	//scanf_s("%d %d", &i, &j);
	//printf("i=%d,j=%d,值为：%d\n", i, j, *(p2 + i * 4 + j));
	//printf("i=%d,j=%d,值为：%d", i, j, *(*(p3+i)+j));

	for (int m = 0; m < 3; m++) {
		for (int n = 0; n < 4; n++) {
			printf("%d", *(*(p3 + m) + n));
		}
		printf("\n");
	} 
	//int (*p3)[4];
	//p3 = arr2;
	//printf("i=%d,j=%d,值为：%d", i, j, *(*(p3+i)+j));


	//int a, b;
	//printf("请输入两个数字：\n"); 
	//scanf_s("%d %d", &a, &b);
	//int *p1 = &a, *p2 = &b;
	//swap(p1, p2);
	//printf("%d,%d\n",a,b);


	//for (int i = 0; i < 4; i++)
	//{
	//	self_Sum();
	//};
	//extern void func();
	//func();

	/*
	int l, w, h;
	printf("请输出长 宽 高:");
	scanf("%d %d %d", &l, &w, &h);
	getVS(l, w, h);
	printf("体积：%d，面1：%d，面2：%d，面3：%d",v,s1,s2,s3);
	*/
	//char grade;
	//scanf("%c", &grade);
	//switch (grade)
	//{
	//	case 'A':
	//		printf("优秀");
	//		break;
	//	case 'B':
	//		printf("良好");
	//		break;
	//	default:
	//		printf("重新输入");
	//		break;
	//}
	//char a;
	//a = 1 > 2 ? 'T': 'F';
	//printf("%c", a);

	//int arr[num];
	//int sum = 0;
	//for (int i = 0; i < num; i++) {
	//	printf("请输入第%d个数字", i + 1);
	//	scanf("%d", &arr[i]);
	//	sum += arr[i];
	//}
	//printf("平均值是：%.2f\n", (double)sum / num);
	/*
	char str[] = "cuimaomao";
	int arr[3];
	printf("%u\n",strlen(str));
	printf("%u\n",sizeof(str));
	printf("%u\n", sizeof(arr)/sizeof(int));
	char str2[10];
	strcpy(str2, str);
	printf("%s\n", str2);
	char str3[10];
	strncpy(str3, str2, 3);
	str3[3] = '\0';
	printf("%s\n", str3);

	//char str4[] = "nihao";
	//strcat(str, str4);
	//printf("%s\n", str);

	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d", arr2[i][j]);	
		}
		printf("\n");
	}

	*/

	//char a = 'F';
	//int b = 15;

	//char *pa = &a;
	//int *pb = &b;

	//printf("%c\n", *pa);
	//printf("%d\n", *pb);

	//*pa = 'D';
	//*pb += 1;

	//printf("%c\n", a);
	//printf("%d\n", b);

	//printf("%d,%p\n",sizeof(pa),pa);
	//printf("%d,%p\n", sizeof(pb), pb);

	//int getMax(int, int);
	//int a, b;
	//printf("请输入两个整型数字");
	//scanf("%d %d", &a, &b);
	//printf("最大数是：%d",getMax(a,b));

	return 0;
}


int getMax(int a, int b) {
	if (a > b) {
		return a;
	}
	else
	{
		return b;
	}

}