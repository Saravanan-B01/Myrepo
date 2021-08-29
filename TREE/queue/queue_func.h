struct node{
        struct tree *Data;
        struct node *Next;
};

struct tree{
        struct tree *lchild;
        int D;
        struct tree *rchild;
};
struct tree *root;
struct node *Front;
struct node *Rear;

int isEmpty(struct node *queue);
void enqueue(struct tree *p);
struct tree *dequeue(struct node *Dequeue);
int isEmpty(struct node *queue);
