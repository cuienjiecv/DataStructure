#include"stdlib.h"
#include"stdio.h"
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 1
#define MAXSIZE 10
typedef int SElemtype;
typedef int status;

typedef struct Node {
	SElemtype data;
	struct Node* next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack {
	LinkStackPtr top;
	int count;
}LinkStack;

status push(LinkStack* s, SElemtype e) {
	LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
	p->data = e;
	p->next = s->top;
	s->top = p;
	s->count++;
	return OK;
}

status pop(LinkStack* s, SElemtype *e) {
	if (s->top->next == NULL) {
		return ERROR;
	}
	*e = s->top->data;
	LinkStackPtr p = s->top;
	s->top = s->top->next;
	s->count--;
	free(p);
	return OK;
}


int Fbi(int i) {
	if (i < 2) {
		return i == 0 ?0:1;
	}
	return Fbi(i - 1) + Fbi(i - 2);
}

int main() {

	for (int i = 0; i <= 20; i++) {
		printf("%d,%d\n",i,Fbi(i));
	}
	return 0;
}