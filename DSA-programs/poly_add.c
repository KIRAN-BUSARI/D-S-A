#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float coef;
    int expo;
    struct pnode *link;
} pnode;
pnode *p1, *p2, *p3, *temp;
int main()
{
    int n, i, m, j;
    printf("Enter the size of polynomial 1:");
    scanf("%d", &n);
    printf("Enter the size of polynomial 2:");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        pnode *temp, *p;
        temp = (pnode *)malloc(sizeof(pnode));
        printf("Enter the coefficient :");
        scanf("%f", &temp->coef);
        printf("Enter the exponential portion:");
        scanf("%d", &temp->expo);
        temp->link = NULL;
        if (p1 == NULL)
            p1 = temp;
        else
            p->link = temp;
        p = temp;
    }
    pnode *a;
    printf("First polynomial:\n");
    a = p1;
    while (a != NULL)
    {
        printf(" %f X^%d ", a->coef, a->expo);
        a = a->link;
    }
    printf("\n");

    for (j = 0; j < m; j++)
    {
        pnode *temp1, *r;
        temp1 = (pnode *)malloc(sizeof(pnode));
        printf("Enter the coefficient :");
        scanf("%f", &temp1->coef);
        printf("Enter the exponential portion:");
        scanf("%d", &temp1->expo);
        temp1->link = NULL;
        if (p2 == NULL)
            p2 = temp1;
        else
            r->link = temp1;
        r = temp1;
    }
    pnode *b;
    printf("Second polynomial:\n");
    b = p2;
    while (b != NULL)
    {
        printf(" %f X^%d ", b->coef, b->expo);
        b = b->link;
    }
    printf("\n");
    // printf("Entering while loop");
    pnode *q1, *q2;
    q1 = p1;
    q2 = p2;
    while (q1 != NULL && q2 != NULL)
    {
        pnode *s;
        s = (pnode *)malloc(sizeof(pnode));
        s->link = NULL;
        if (q1->expo == q1->expo)
        {
            s->coef = q2->coef + q2->coef;
            s->expo = q2->expo;
            q1 = q1->link;
            q2 = q2->link;
        }
        else if (q1->expo > q2->expo)
        {
            s->coef = q1->coef;
            s->expo = q1->expo;
            q1 = temp->link;
        }
        else
        {
            s->coef = q2->coef;
            s->expo = q2->expo;
            q2 = q2->link;
        }
        if (p3 == NULL)
            p3 = s;
        else
            temp->link = s;
        temp = s;
    }
    while (q1 != NULL)
    {
        pnode *temp1, *s;
        s = (pnode *)malloc(sizeof(pnode));
        s->link = NULL;
        s->expo = q1->expo;
        s->coef = q1->coef;
        q1 = q1->link;
        if (p3 == NULL)
            p3 = s;
        else
            temp1->link = s;
        temp = s;
    }
    while (q2 != NULL)
    {
        pnode *temp2, *s;
        s = (pnode *)malloc(sizeof(pnode));
        s->link = NULL;
        s->expo = q2->expo;
        s->coef = q2->coef;
        q1 = q2->link;
        if (p3 == NULL)
            p3 = s;
        else
            temp2->link = s;
        temp = s;
    }
    pnode *c;
    printf("The third list:\n");
    for (c = p3; c != NULL; c = c->link)
        printf("%dx^%d", c->coef, c->expo);
    return 0;
}