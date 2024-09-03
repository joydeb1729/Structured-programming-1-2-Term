#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node *currentNode (struct node *currentHead)
{
    struct node *temp=currentHead;
    while(temp!=NULL && temp->data%2)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    int arr[100];
    int i=0;
    while(temp!=NULL && temp->data%2==0)
    {
        arr[i++]=temp->data;
        temp=temp->next;
    }
    int n=i;

    for(i=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return temp;
}



int main()
{   
    int i, n;
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *temp;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            scanf("%d", &head->data);
            head->next=NULL;
            temp=head;
        }
        else
        {
            struct node *current=(struct node *)malloc(sizeof(struct node));
            scanf("%d", &current->data);
            current->next=NULL;
            temp->next=current;
            temp=current;
        }
    }

    temp=head;

    while(temp!=NULL)
    {
        temp=currentNode(temp);
    }

    return 0;
}