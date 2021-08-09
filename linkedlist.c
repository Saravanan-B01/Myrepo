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

/**Finding the MAX value in linked list**/
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
/**Searching using the move to head method**/
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
/**Inserting the node**/
void inserting(struct Node *p, int value, int pos)
{
    int i;
    struct Node *tmp;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=value;
    tmp->next=NULL;

    if(pos==0)
    {
        tmp->next=first;
        first=tmp;
    }
    else
    {
        for(i=1;i<=pos-1 && p;i++)
        {
            p=p->next;
        }
        tmp->next=p->next;
        p->next=tmp;
        p=tmp;
    }

}
/**Inserting value to last node**/
void insertinglast(struct Node *p, int value)
{
    struct Node *tmp,*q;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=value;
    tmp->next=NULL;

    while(p!=NULL)
    {
            q=p;
            p=p->next;
    }
    q->next=tmp;
    p=q=tmp;

}

/**Inserting element in sorted linked**/
void stortedlinkedlist(struct Node *p, int value)
{
    struct Node *tmp,*q;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=value;
    while(p!=NULL)
    {
        if(value < p->data)
           {
               tmp->next= q->next;
               q->next = tmp;
               q=tmp;
               break;
           }
           q=p;
           p=p->next;
    }
}
/**Deleting the Node **/
void deleteNode(struct Node *p, int data)
{
    struct Node *q;
    while (p!=NULL)
    {
        if(p->data == data)
        {
            q->next=p->next;
            break;
        }
        q=p;
        p=p->next;
    }
}

void delete1(struct Node *p, int pos)
{
    int i;
    struct Node *q;
    if(pos == 0)
    {
        p=p->next;
        first=p;

    }
    else {
        for(int i=1;i<=pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
    }

}

/*Deleting duplicate date in list */
void deleteting_dupicate(struct Node *p)
{
    struct Node *q = p->next;
    while(p!=NULL)
    {
        if(q->data!=p->data)
        {
            q=p;
            p=p->next;
        }
        else
        {
            q->next = p->next;
            p=q->next;

        }
    }
}
/**Reversing the linked list*/
void reversing_linked_list(struct Node *N)
{
    int a[13], i=0;
    while(N!=NULL)
    {
        a[i]=N->data;
        N=N->next;
        i++;
    }
    N=first; i--;
    while(i>=0)
    {
        N->data=a[i--];
        N=N->next;
    }
}
/*Revesing linked list using sliding method*/
void reversing_linked_list_using_slide(struct Node *N)
{
    struct Node *q = NULL;
    struct Node *r = NULL;
    while(N!=NULL)
    {
        r=q;
        q=N;
        N= N->next;
        q->next=r;
    }
    first=q;
}
/*Revering using recursive method */
void reversing_recursive(struct Node *q, struct Node *p)
{
    if(p!=NULL)
    {
        reversing_recursive(p, p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
}
/*** Concatenation ***/
void concatenation(struct Node *N)
{
    while(N->next!=NULL)
    {
        N = N->next;
    }
    N->next= second;
    N=second;
}
/** Merging Linked list **/ 
void merging_linked(struct Node *N, struct Node *P)
{
    struct Node *T;
    struct Node *L;
    if(N->data < P->data)
    {
        T=L=N;
        N=N->next;
        L->next=NULL;
    }
    else{
        T=L=P;
        P=P->next;
        L->next=NULL;
    }
    while(N!=NULL && P!=NULL)
    {
        if(N->data < P->data)
        {
            L->next=N;
            L=N;
            N=N->next;
            L->next=NULL;
        }
        else
        {
            L->next=P;
            L=P;
            P=P->next;
            L->next=NULL;
        }
    }
    if(N)
        L->next=N;
    else
        L->next=P;


    Displaylinkedlist(T);
}
/**API for loop detecting**/
void isloop(struct Node *f)
{
    struct Node *p, *q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q ? q->next :q;
    }while(q && p && p!=q);
    if (p==q)
    {
        printf("LOOP in linked list\n");
    }
    else
    {
        printf("NO LOOP is detected\n");
    }
}

/**Displaying circular linked list**/
int DisplayCircularlinked(struct Node *D)
{
    static int i=0;
    if(D!=first || i==0) {
        i=1;
        printf("Circular linked list value is %d\n", D->data);
        return DisplayCircularlinked(D->next);
    }
    i=0;
    return 0;
}
/**Circular linked list creation **/
void circular_linked(struct Node *p, int value[], int array_len)
{
    int i;
    struct Node *tmp, *last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=value[0];
    first->next=first;
    last=first;

    for(i=1;i<=array_len;i++)
    {
        tmp=(struct Node*)malloc(sizeof(struct Node));
        tmp->data=value[i];
        tmp->next=last->next;
        last->next=tmp;
        last=tmp;
    }
}
int main()
{
    inserting(first, 10, 0);
    inserting(first, 20, 1);
    inserting(first, 30, 2);
    inserting(first, 40, 3);
    inserting(first, 50, 4);
    inserting(first, 60, 5);
    inserting(first, 70, 6);

    Displaylinkedlist(first);
    printf("\n\n");
    delete1(first, 0);
    Displaylinkedlist(first);
    printf("\n\n");
    delete1(first, 2);
    Displaylinkedlist(first);

    /**Making an linkedlist as loop**/
    struct Node *t1, *t2;
    t1=first->next->next;
    t2=first->next->next->next->next->next->next;
    t2->next=t1;
    return 0;
}
