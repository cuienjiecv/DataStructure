#include"stdlib.h"
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 1
#define MAXSIZE 10
typedef int SElemtype;
typedef int status;
typedef struct stack{
	SElemtype data[MAXSIZE];
	int top;
}Sqstack;
//struct stack{
//	SElemtype data[MAXSIZE];
//	int top;
//};
//typedef struct stack Sqstack;

status Push(Sqstack* s, SElemtype e) {
	if (s->top == MAXSIZE - 1) {
		return ERROR;
	}
	s->top++;
	s->data[s->top] = e;
	return OK;
}

status Pop(Sqstack* s, SElemtype *e) {
	if (s->top == - 1) {
		return ERROR;
	}
	*e = s->data[s->top];
	s->top--;
	return OK;
}

