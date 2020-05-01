#include<stdio.h>;
int main() {
	char copy_result[20], string[] = "hello world";

	const char *s = "hello world",**s2 = &s;
	printf("%s\n", s+4);


	void CopyString(char[], char[]);
	CopyString(string, copy_result);
	printf("%s\n", copy_result);

	printf("¶þ¼¶Ö¸Õë£º%s\n", *s2);

	int arr[] = { 1,2,3 }, *p = arr;
	printf("%X,%d\n",p,*p);
	printf("%X,%d\n", p+1, *(p+1));
	printf("%X,%d\n", p+2, *(p+2));

	char ch = 'a', *ch_p = &ch;
	printf("%c\n", *ch_p);

	return 0;
}

void CopyString(char from[], char to[]) {
	int i = 0;
	while (from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}