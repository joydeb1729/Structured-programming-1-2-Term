#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsertAtFirst(struct Node *head, int element)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = element;
    ptr->next = head;

    return ptr;
}

void InsertInBetween(struct Node *head, int element, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = element;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;

    int i = 0;
    while (i < index)
    {
        temp = temp->next;
        i++;
    }

    ptr->next = temp->next;
    temp->next = ptr;
}

void InsertAfterNode(struct Node *prevNode, int element)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = element;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
}

void InsertAtEnd(struct Node *head, int element)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = element;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = NULL;
}

int main()
{
    struct Node *head, *second, *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = NULL;

    display(head);
    printf("\n");

    // Insert at i=0 [At beginning]
    head = InsertAtFirst(head, 50);
    display(head);
    printf("\n");

    // Insert at i=1->i=n-2 [Not for first and last index]
    InsertInBetween(head, 150, 1);
    display(head);
    printf("\n");

    // Insert after a Node [Node is given]
    InsertAfterNode(second, 250);
    display(head);
    printf("\n");

    // Insert at i=n-1 [At end]
    InsertAtEnd(head, 350);
    display(head);
    printf("\n");

    return 0;
}