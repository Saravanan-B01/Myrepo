#include <iostream>
/**Creating the linkedlist**/
struct Node {
    int data;
    struct Node *next;
};
struct Node *first = NULL;

/**Adding value in it**/
void createlinkedlist(int a[], int n)
{
    struct Node *tmp,*last;
    first= (struct Node *)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last=first;

    for(int i=1; i<n; i++)
    {
        tmp=(struct Node*)malloc(sizeof(struct Node));
        tmp->data = a[i];
        tmp->next = NULL;
        last->next=tmp;
        last=tmp;
    }
}

/**Displaying value in linkedlist**/
int Displaylinkedlist(struct Node *D)
{
    if(D!=NULL) {
        printf("Linked list value %d\n", D->data);
        return Displaylinkedlist(D->next);
    }
    else
        return 0;
}

/**Counting the linked list value**/
int linkedlistcount(struct Node *K)
{
    if(K!=NULL)
        return 1+ linkedlistcount(K->next);
    else
        return 0;

}

/**Finding the MAX value in linkedlist**/
int findMAX(struct Node *M)
{
    int ismax = -1;
    while(M!=NULL)
    {
        if(ismax < M->data)
        {
            ismax = M->data;
        }
        M=M->next;
    }
    return ismax;
}
struct Node *searching(struct Node *p,  int key)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
};

void inserting(struct Node *p, int value, int pos)
{
    int i=1;
    struct Node *tmp;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=value;
    tmp->next=NULL;

    for(i=1,i<=pos-1;i++)
    {
        p=p->next;
    }
    if(p!=NULL)
    {
        tmp->next=p->next;
        p->next=tmp;

    }
}

int main()
{
    int a[]= {1,2,3,18,5,6};
    createlinkedlist(a, 6);

    printf("Linked list count value %d\n",linkedlistcount(first));

    printf("Maximum Value in linked list is %d\n", findMAX(first));
    searching(first, 5);
    inserting(first, 3, 25 );
    Displaylinkedlist(first);

    return 0;
}
