#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void ShowFromLeft(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void ShowFromRight(struct node *tale)
{
    struct node *temp;
    temp=tale;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int main()
{

    struct node *head, *temp, *current;
    head = (struct node *)malloc(sizeof(struct node));
    int i;

    for (i = 0; i < 5; i++)
    {
        if(i==0)
        {
            scanf("%d",&head->data);
            head->prev=NULL;
            head->next=NULL;
            temp=head;
        }
        else
        {
            current=(struct node *)malloc(sizeof(struct node));
            scanf("%d", &current->data);
            temp->next=current;
            current->next=NULL;
            current->prev=temp;
            temp=current;
        }
    }
    struct node *tale=temp;
    ShowFromLeft(head);
    ShowFromRight(tale);

    return 0;
}