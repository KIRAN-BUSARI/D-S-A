#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int co, ex;
    struct pnode *link;
} pnode;
pnode *list1, *list2, *list3, *temp;
void main()
{
    int n1, n2;
    printf("Enter the number of elements in first polynomail:");
    scanf("%d", &n1);
    printf("Enter the number of elements in scoend polynomail:");
    scanf("%d", &n2);
    for (int i = 0; i < n1; i++)
    {
        pnode *temp, *p1;
        p1 = (pnode *)malloc(sizeof(pnode));
        printf("Enter 1coeaff number%d:", i + 1);
        scanf("%d", &p1->co);
        printf("Enter 1expo number%d:", i + 1);
        scanf("%d", &p1->ex);
        p1->link = NULL;
        if (list1 == NULL)
            list1 = p1;
        else
            temp->link = p1;
        temp = p1;
    }
    for (int i = 0; i < n2; i++)
    {
        pnode *temp, *p2;
        p2 = (pnode *)malloc(sizeof(pnode));
        printf("Enter 2coeaff number%d:", i + 1);
        scanf("%d", &p2->co);
        printf("Enter 2expo number%d:", i + 1);
        scanf("%d", &p2->ex);
        p2->link = NULL;
        if (list2 == NULL)
            list2 = p2;
        else
            temp->link = p2;
        temp = p2;
    }
    pnode *q1, *q2;
    q1 = list1;
    q2 = list2;
    while (q1 != NULL && q2 != NULL)
    {
        pnode *p3;
        p3 = (pnode *)malloc(sizeof(pnode));
        p3->link = NULL;
        if (q1->ex == q2->ex)
        {
            p3->co = q1->co + q2->co;
            p3->ex = q1->ex;
            q1 = q1->link;
            q2 = q2->link;
        }
        else if (q1->ex < q2->ex)
        {
            p3->co = q2->co;
            p3->ex = q2->ex;
            q2 = q2->link;
        }
        else
        {
            p3->co = q1->co;
            p3->ex = q1->ex;
            q1 = q1->link;
        }
        if (list3 == NULL)
            list3 = p3;
        else
            temp->link = p3;
        temp = p3;
    }
    // printf("kk1\n");
    while (q1 != NULL)
    {
        pnode *temp1, *p3;
        p3 = (pnode *)malloc(sizeof(pnode));
        p3->link = NULL;
        p3->ex = q1->ex;
        p3->co = q1->co;
        q1 = q1->link;
        if (list3 == NULL)
            list3 = p3;
        else
            temp->link = p3;
        temp = p3;
    }

    while (q2 != NULL)
    {
        pnode *temp2, *p3;
        p3 = (pnode *)malloc(sizeof(pnode));
        p3->link = NULL;
        p3->ex = q2->ex;
        p3->co = q2->co;
        q2 = q2->link;
        if (list3 == NULL)
            list3 = p3;
        else
            temp->link = p3;
        temp = p3;
    }
    pnode *q;

    printf("The first list:\n");
    for (q = list1; q != NULL; q = q->link)

        printf("%dx^%d", q->co, q->ex);
    printf("\n");
    pnode *p;

    printf("The second list:\n");
    for (p = list2; p != NULL; p = p->link)

        printf("%dx^%d", p->co, p->ex);
    printf("\n");
    pnode *a;
    printf("The third list:\n");
    for (a = list3; a != NULL; a = a->link)
        printf("%dx^%d", a->co, a->ex);
}