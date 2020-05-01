#include"stdlib.h"
#include"stdio.h"
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 1
#define MAXSIZE 5
typedef int QElemtype;
typedef int status;

typedef struct queue {
	QElemtype data[MAXSIZE];
	int front;
	int rear;
}SqQueue;

status InitQueue(SqQueue* q) {
	q->front = 0;
	q->rear = 0;
	return OK;
}

int QueueLength(SqQueue* q) {
	return (q->rear + MAXSIZE - q->front)%MAXSIZE;
}

status EnQueue(SqQueue* q, QElemtype e) {
	if ((q->rear + 1) % MAXSIZE == q->front) {
		return ERROR;
	}
	q->data[q->rear] = e;
	q->rear = (q->rear + 1) % MAXSIZE;
	return OK;
}

status DeQueue(SqQueue* q, QElemtype *e) {
	if (q->front == q->rear) {
		return ERROR;
	}
	*e = q->data[q->front];
	q->front = (q->front + 1) % MAXSIZE;
	return OK;
}
typedef struct Node {
	QElemtype data;
	struct Node* next;
}QNode,*Queueptr;

typedef struct LinkQueue {
	Queueptr front,rear;
}LinkQueue;

status LEnQueue(LinkQueue* q, QElemtype e) {
	Queueptr s = (Queueptr)malloc(sizeof(QNode));
	s->data = e;
	s->next = NULL;
	q->rear->next = s;
	q->rear = s;
	return OK;
}
status LDeQueue(LinkQueue* q, QElemtype *e) {
	if (q->front == q->rear) {
		return ERROR;
	}
	Queueptr s = q->front->next;
	*e = q->front->next->data;
	q->front->next = s->next;
	if (q->rear == s) {
		q->rear = q->front;
	}
	free(s);
	return OK;

}
