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

struct Node *DeleteAtFirst(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    head = head->next;

    free(ptr);

    return head;
}

void DeleteInBetween(struct Node *head, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;

    int i = 0;
    while (i < index - 1) // v.v.p // if loop starts from i=1 then i<index
    {
        temp = temp->next;
        i++;
    }

    ptr = temp->next;
    temp->next = ptr->next;
    free(ptr);
}

void DeleteNode(struct Node *head, struct Node *prevNode)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;

    int i = 0;
    while (temp->next != prevNode)
    {
        temp = temp->next;
        i++;
    }
    ptr = temp->next;
    temp->next = ptr->next;

    free(ptr);
}

void DeleteAtEnd(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;
    ptr = head->next;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        temp = temp->next;
    }
    temp->next = NULL;
    free(ptr);
}

void DeleteElement(struct Node *head, int element)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    ptr = head->next;
    temp = head;

    int i = 0;
    while (ptr->data != element && ptr->next != NULL)
    {
        temp = temp->next;
        ptr = ptr->next;
    }

    temp->next = ptr->next;

    free(ptr);
}

int main()
{
    struct Node *head, *second, *third, *fourth, *fifth, *sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 50;
    head->next = second;

    second->data = 100;
    second->next = third;

    third->data = 150;
    third->next = fourth;

    fourth->data = 200;
    fourth->next = fifth;

    fifth->data = 250;
    fifth->next = sixth;

    sixth->data = 300;
    sixth->next = NULL;

    display(head);
    printf("\n");

    // Delete at i=0 [At beginning]
    head = DeleteAtFirst(head);
    display(head);
    printf("\n");

    // Delete at i=1->i=n-2 [Not for first and last index]
    DeleteInBetween(head, 1);
    display(head);
    printf("\n");

    // Delete a Node [Node is given]
    DeleteNode(head, fifth);
    display(head);
    printf("\n");

    // Delete at i=n-1 [At end]
    DeleteAtEnd(head);
    display(head);
    printf("\n");

    // Delete an specific element [first occurrence]
    DeleteElement(head, 200);
    display(head);
    printf("\n");

    return 0;
}