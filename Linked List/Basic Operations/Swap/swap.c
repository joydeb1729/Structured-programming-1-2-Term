#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};


void display(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

struct node *swapDouble(struct node *head)
{
    struct node *newHead=NULL;
    struct node *ptr;
    
    struct node *prev=head->next;
    struct node *top=prev->next;

    while(prev->next!=NULL && top->next!=NULL)
    {
        struct node *tempTop=(struct node *)malloc(sizeof(struct node ));
        tempTop->data=top->data;
        tempTop->next=NULL;
        struct node *tempPrev=(struct node *)malloc(sizeof(struct node ));
        tempPrev->data=prev->data;
        tempPrev->next=NULL;


        ptr->next=tempTop;
        ptr=ptr->next;
        ptr->next=tempPrev;

        
        prev=top->next;
        if(prev->next==NULL){break;}       
        top=prev->next;
    }
    return newHead;
}



int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *temp;

    int i;
    for(i=0; i<8; i++)
    {
        if(i==0)
        {
            scanf("%d", &head->data);
            head->next=NULL;
            temp=head;
        }
        else
        {
            struct node *current = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &current->data);
            current->next=NULL;
            temp->next=current;
            temp=current;
        }

    }
    display(head);
    struct node *newHead=swapDouble(head);
    display(newHead);




}