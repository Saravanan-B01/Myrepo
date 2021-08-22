#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


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

void Postorder(struct tree *p)
{
	if(p)
	{
 		Postorder(p->lchild);
 		Postorder(p->rchild);
 		printf("%d ",p->D);
 	}
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


void main()
{
	Treecreation();
	printf("Print Postorder\n");
	Postorder(root);
	printf("\n\n");
	printf("Print Preorder\n");
	Pretorder(root);
	printf("\n\n");
	printf("Print Inorder\n");
	inorder(root);
	printf("\n\n");
}
