#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp;
    temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct node *InsertAtFirst(struct node *head, int element)
{
    struct node  *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=element;
    temp->next=head;

    return temp;
}

void InsertAtEnd(struct node *head, int element)
{
    struct node  *temp=(struct node *)malloc(sizeof(struct node));
    struct node  *current=(struct node *)malloc(sizeof(struct node));
    temp=head;
    current->data=element;
    current->next=NULL;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=current;

}

void InsertInBetween(struct node *head, int index, int element)
{
    struct node  *temp=(struct node *)malloc(sizeof(struct node));
    struct node  *temp2=(struct node *)malloc(sizeof(struct node));
    struct node  *current=(struct node *)malloc(sizeof(struct node));
    current->data=element;
    current->next=NULL;

    temp=head;          //temp started from head & temp2 started from head->next 
    temp2=head->next;


    int i=0;
    while(i<index)
    {
         temp=temp->next;   //temp pointer is at (index) and temp2 is at (index+1).
        temp2=temp2->next;  
        i++;
    }
    temp->next=current;     //Then adding current between temp and temp2.
    current->next=temp2;
}

int findIndex(struct node *head, int element)
{
    struct node  *temp=(struct node *)malloc(sizeof(struct node));
    temp=head;

    int i=0;
    while(temp->data<=element )
    {
        temp=temp->next;
        i++;
        if(temp==NULL) // not using (temp->next==NULL) to get the exact index.
        break;
    }

    return i;
}

int findLength(struct node *head)
{
    struct node  *temp=(struct node *)malloc(sizeof(struct node));
    temp=head;

    int i=0;
    while(temp!=NULL)  // not using (temp->next!=NULL) to get the full length.
    {
        temp=temp->next;  
        i++;
    }

    return i;
}

int main()
{
    int i, n;

    struct node *head, *temp, *current;

    head=(struct node *)malloc(sizeof(struct node));
    printf("Enter Number: ");
    scanf("%d",&n);
    head->data=n;
    head->next=NULL;
    display(head);

    for(i=0; i<10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &n);
        int index=findIndex(head,n);
        int length=findLength(head);
        //printf("%d %d .. ",index, length);
        if(index==0)
        {
            head=InsertAtFirst(head,n);
            display(head);
        }
        else if(index==length)
        {
            InsertAtEnd(head,n);
            display(head);
        }
        else
        {
            InsertInBetween(head,index-1,n); // (index-1) to run the loop till (i<index) in function
            display(head);
        }
                
    }

}