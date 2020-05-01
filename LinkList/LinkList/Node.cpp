#include"stdlib.h"
#include <time.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 1
typedef int status;
typedef int ElemType;

typedef struct Node
{
	ElemType data;
	struct Node* next;
}Node;
typedef struct Node *LinkList;// ����ĵ�һ���ڵ�



status GetElem(LinkList L, int i, ElemType* e) {
	int j = 1;
	LinkList p = L->next;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p || j > i) {
		return ERROR;
	}
	*e = p->data;
	return OK;
}
status ListInsert(LinkList L, int i, ElemType e) {
	int j = 1;//j��������
	LinkList p, s;
	p = L;
	//�ҵ���i-1���ڵ�,��ѭ��i-1��
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p || j > i) {
		return ERROR;
	}
	s = (LinkList)malloc(sizeof(Node));
	s->next = p->next;
	p->next = s;
	return OK;
}
status ListDelete(LinkList L, int i, ElemType *e) {
	int j = 1;//j��������
	LinkList p, q;
	p = L;
	//�ҵ���i-1���ڵ�,��ѭ��i-1��
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p || j > i) {
		return ERROR;
	}
	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);
	return OK;
}

void CreateLinklistHead(LinkList L, int n) {
	LinkList p;
	L = (LinkList)malloc(sizeof(Node));
	L->next = NULL;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p->next = L->next;
		L->next = p;
	}
}

void CreateLinklistTail(LinkList L, int n) {
	LinkList p,r;
	L = (LinkList)malloc(sizeof(Node));
	srand(time(0));
	r = L;
	for (int i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		r->next = p;
		r = p;
	}
	r->next = NULL;
}