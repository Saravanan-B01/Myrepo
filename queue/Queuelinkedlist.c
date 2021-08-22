#include<stdio.h>
#include <stdlib.h>
struct node{
	int Data;
	struct node *Next;
};
struct node *Front = NULL;
struct node *Rear = NULL;
void enqueue(int data);
int dequeue(struct node *Dequeue);

void enqueue(int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node*));
	tmp->Data = data;
	tmp->Next = NULL;

	if(Front == NULL){
		Front= Rear= tmp;
	}else {
		Rear->Next= tmp;
		Rear= tmp;
	}
}

int dequeue(struct node *Dequeue)
{
	int X;
	struct node *p;

	if(Dequeue == NULL)
		printf("Queue is empty\n");
	else{
		p= Front;
		X= Front->Data;
		Front = Front->Next;
		free(p);
		printf("Deleted the node %d\n", X);
	}
	return X;

}

void Displayqueue(struct node *D)
{
	if(D == NULL)
		printf("Queue is empty\n");

	while(D!=NULL)
	{
		printf("Node contains %d\n", D->Data);
		D=D->Next;
	}


}

void reversing_linked_list_using_slide(struct node *N)
{
    struct node *q = NULL;
    struct node *r = NULL;
    while(N!=NULL)
    {
        r= q;
        q= N;
        N= N->Next;
        q->Next= r;
    }
    Front=q;
}


int main()
{
	Front = Rear = NULL;
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	Displayqueue(Front);
	printf("\n\n");
	reversing_linked_list_using_slide(Front);
	Displayqueue(Front);
	printf("\n\n");
	dequeue(Front);
	dequeue(Front);
	Displayqueue(Front);
	return 0;
}

