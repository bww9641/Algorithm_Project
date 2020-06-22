#include<stdio.h>
#include<stdlib.h>
#define Q_SIZE 4

typedef char element;
typedef struct{
  element queue[Q_SIZE];
  int front,rear;
} QueueType;

QueueType *createQueue() {
  QueueType *Q;
  Q=(QueueType *)malloc(sizeof(QueueType));
  Q->front=-1;
  Q->rear=-1;
  return Q;
}

int isEmpty(QueueType *Q){
  if(Q->front == Q->rear){
    printf("Queue is empty! ");
    return 1;
  }
  else return 0;
}

int isFull(QueueType *Q){
  if(Q->rear == Q_SIZE-1){
    printf("Queue is full! ");
    return 1;
  }
  else return 0;
}

void enQueue(QueueType *Q, element item){
  if(isFull(Q)) return;
  else{
    Q->rear++;
    Q->queue[Q->rear] = item;
  }
}

element deQueue(QueueType *Q){
  if(isEmpty(Q)) return NULL;
  else{
    Q->front++;
    return Q->queue[Q->front];
  }
}

element peek(QueueType *Q){
  if(isEmpty(Q)) exit(1);
  else return Q->queue[Q->front+1];
}

void printQ(QueueType *Q){
  int i;
  printf(" Queue : [");
  for(i=Q->front+1;i<=Q->rear;i++)
    printf("%c",Q->queue[i]);
  printf("]");
}

int main() {
	QueueType *Q1 = createQueue();  // 큐 생성
	element data;
	printf("\n ***** 순차 큐 연산 ***** \n");
	printf("\n 삽입 A>>");  enQueue(Q1, 'A'); printQ(Q1);
	printf("\n 삽입 B>>");  enQueue(Q1, 'B'); printQ(Q1);
	printf("\n 삽입 C>>");  enQueue(Q1, 'C'); printQ(Q1);
	data = peek(Q1);    printf(" peek item : %c \n", data);
	printf("\n 삭제  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\t삭제 데이터: %c", data);
	printf("\n 삭제  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\t삭제 데이터: %c", data);
	printf("\n 삭제  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\t\t삭제 데이터: %c", data);
	printf("\n 삽입 D>>");  enQueue(Q1, 'D'); printQ(Q1);
	printf("\n 삽입 E>>");  enQueue(Q1, 'E'); printQ(Q1);
  return 0;
}

