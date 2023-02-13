#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float coef;
    int expo;
    struct pnode *link;
} pnode;
pnode *plist;
int main()
{
    int n, i;
    printf("Enter the size of Array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        pnode *temp, *p;
        temp = (pnode *)malloc(sizeof(pnode));
        printf("Enter the coefficient :");
        scanf("%f", &temp->coef);
        printf("Enter the exponential portion:");
        scanf("%d", &temp->expo);
        temp->link = NULL;
        if (plist == NULL)
            plist = temp;
        else
            p->link = temp;
        p = temp;
    }
    pnode *q;
    q = plist;
    while (q->link != NULL)
    {
        printf(" %f X^%d ", q->coef, q->expo);
        q = q->link;
    }
    return 0;
}