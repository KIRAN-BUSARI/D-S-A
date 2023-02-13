#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    struct Dnode *llink;
    int data;
    struct Dnode *rlink;
} Dnode;
Dnode *dlist = NULL;
void insert_before_p(Dnode *p)
{
    Dnode *temp, *q;
    temp = (Dnode *)malloc(sizeof(Dnode));
    printf("enter the element to be inserted:");
    scanf("%d", &temp->data);
    if (p == NULL)
    {
        printf("Invlid insertion..");
    }
    else
    {
        q = p->llink;
        temp->rlink = p;
        temp->llink = q;
        p->llink = temp;
        p->rlink = temp;
    }
}
void insert_after_p(Dnode *p)
{
    Dnode *temp, *q;
    temp = (Dnode *)malloc(sizeof(Dnode));
    printf("Enter the element:");
    scanf("%d", temp->data);
    if (p == NULL)
    {
        printf("invalid insertion...");
    }
    else
    {
        q = p->rlink;
        temp->llink = p;
        temp->rlink = q;
        p->rlink = temp;
        q->llink = temp;
    }
}
void delete_at_p(Dnode *p)
{
    Dnode *q, *r;
    if (p == NULL)
    {
        printf("Invalid Deletion... ");
    }
    else
    {
        q = p->llink;
        r = p->rlink;
        printf("The deleted element is %d", p->data);
        free(p);
        r->llink = q;
        q->rlink = r;
    }
}