#include <stdio.h>
#include <stdlib.h>
#include "queue_func.h"
static int ISPRESENT;

void Treecreation()
{
	int X;
	struct tree *tmp,*p;
	root = (struct tree *)malloc(sizeof(struct tree));
	printf("Enter the node value\n");
	scanf("%d", &X);
	root->D= X;
	root->rchild= root->lchild= NULL;
	enqueue(root);

	while(!isEmpty(Front)){
		p= dequeue(Front);
		printf("Enter the left node value %d\n", p->D);
		scanf("%d", &X);
		if(X!=-1)
		{
			tmp= (struct tree *)malloc(sizeof(struct tree));
			tmp->D= X;
			p->lchild= tmp;
			enqueue(tmp);
		}
                printf("Enter the right node value %d\n", p->D);
                scanf("%d", &X);
                if(X!=-1)
                {
                        tmp= (struct tree *)malloc(sizeof(struct tree));
                        tmp->D= X;
                        p->rchild= tmp;
                        enqueue(tmp);
                }

	}
}

void Postorder(struct tree *p, int X)
{
        if(p && p->D == X)
        {
		ISPRESENT = 1;
		return ;
        }

        if(p)
        {
                Postorder(p->rchild, X);
                Postorder(p->lchild, X);
        }
}

void searching(struct tree *p)
{
	int X;
	printf("Enter the value to search in node\n");
	scanf("%d", &X);
	Postorder(p, X);
}

void Pretorder(struct tree *p)
{
 	if(p)
 	{
 		printf("%d ",p->D);
	 	Pretorder(p->lchild);
 		Pretorder(p->rchild);
 	}
}

void inorder(struct tree *p)
{
	if(p)
 	{
	 	inorder(p->lchild);
		printf("%d ",p->D);
		inorder(p->rchild);
	 }
}


int main()
{

	Treecreation();
	printf("Print Postorder\n");
	searching(root);
#ifdef TREES
	if(ISPRESENT)
	       printf("Value is present in node");
	else
		printf("Value is not present in node");
#endif
	return 0;
}
