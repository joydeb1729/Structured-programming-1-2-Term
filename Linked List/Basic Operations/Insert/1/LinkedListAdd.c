#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void show(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct node *Insert(struct node *head, int element)
{
    struct node *temp, *prev;
    temp=head;

    struct node *value = (struct node *)malloc(sizeof(struct node));
    value->data=element;
    value->next=NULL;

    while(temp->data<=element && temp->next!=NULL)
    {
        prev=temp;
        temp=prev->next;
        
    }
    if(temp == head)
    {
        value->next=head;
        return value;
    }
    else if(temp->next==NULL && temp->data<element)
    {
        temp->next=value;
        return head;
    }
    else
    {
        prev->next=value;
        value->next=temp;
        return head;
    }
}

int main()
{
    int i;
    struct node *head, *temp, *current;

    head=(struct node *)malloc(sizeof(struct node));
    temp=head;

    for(i=2; i<5; i+=2)
    {
        if(i==2)
        {
            head->data=i;
            head->next=NULL;
            temp=head;
        }
        else
        {
            current=(struct node *)malloc(sizeof(struct node));
            current->data=i;
            current->next=NULL;

            temp->next=current;
            temp=current;
        }
    }

    show(head);             //Initial array
    head=Insert(head,1);
    show(head);             //Inserting at first
    head=Insert(head,3);
    show(head);             //Inserting in Middle
    head=Insert(head,3);
    show(head);             //for existing element
    head=Insert(head,5);
    show(head);             //Inserting at last

    return 0;
}