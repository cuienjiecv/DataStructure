#include"stdio.h"
#include"get_min.h"

#define MAX(x,y) x>y?x:y
#define ADD(x) x = a+x

//#define NULL 0
typedef struct node {
	int info;
	struct node *next;
}LINKLIST;

int main() {
	LINKLIST *head, *p, x, y, z;
	x.info = 1;
	y.info = 2;
	z.info = 3;
	head = &x;
	x.next = &y;
	y.next = &z;
	z.next = NULL;
	p = head;
	while (p != NULL) {
		printf("%d\n", p->info);
		p = p->next;
	}

	int a = 1, b = 2,c=3;
	printf("%d\n", MAX(a, b));
	ADD(c);
	printf("%d\n", c);
	 
	printf("%d\n",sum(10,2));
	return 0;
}