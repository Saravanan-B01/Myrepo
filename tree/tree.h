#include<stdio.h>
#include <stdlib.h>

struct tree{
	struct tree *lchild;
	int D;
	struct tree *rchild;
};

struct tree *root= NULL;

struct node{
	struct tree *Data;
	struct node *Next;
};

struct node *Front = NULL;
struct node *Rear = NULL;


void enqueue(struct tree *p)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node*));
	tmp->Data = p;
	tmp->Next = NULL;

	if(Front == NULL){
		Front= Rear= tmp;
	}else {
		Rear->Next= tmp;
		Rear= tmp;
	}
}

struct tree *dequeue(struct node *Dequeue)
{
	struct tree *X= NULL;
	struct node *p= NULL;

	if(Dequeue == NULL)
		printf("Queue is empty\n");
	else{
		p= Front;
		X= Front->Data;
		Front = Front->Next;
		free(p);
	}
	return X;
}


int isEmpty(struct node *queue)
{
        if(queue == NULL) {
		printf("Queue is empty\n");
 		return 1;
        }else
		return 0;
}
