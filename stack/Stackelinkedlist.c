#include<stdio.h>
#include <stdlib.h>
struct node{
	int Data;
	struct node *Next;

};

struct node *Top = NULL;

void push(int data);
int pop();

void push(int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node*));
	tmp->Data = data;
	tmp->Next = NULL;

	if(Top == NULL){
		Top= tmp;
	}else {
		tmp->Next= Top;
		Top= tmp;
	}
}

int pop()
{
	int X;
	struct node *P;

	if(Top == NULL)
		printf("Stack is empty\n");
	else {
		P = Top;
		Top = Top ->Next;
		X = P->Data;
		printf("Deleting the node is %d\n", X);
		free(P);
	}

	return X;

}

void Displaystack(struct node *B)
{
	if(B!=NULL)
	{
		printf("Node contains %d\n", B->Data);
		Displayqueue(B->Next);
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
    Top=q;
}


int main()
{
	Top = NULL;
	push(10);
	push(20);
	push(30);
	push(40);
        push(50);
        push(60);
        push(70);
        push(80);
	printf("\n\n");
	Displaystack(Top);
	printf("\n\n");
	reversing_linked_list_using_slide(Top);
	printf("\n\n");
	Displayqueue(Top);
	pop();
	pop();
        pop();
        pop();
        pop();

	Displayqueue(Top);
	return 0;
}
