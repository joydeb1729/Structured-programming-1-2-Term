#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    current->next = head;
    return current;
}
void InsertInBetween(struct node *head, int data, int index)
{
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    struct node *temp = head->next;
    struct node *prev = head;
    int count = 1;
    while (count != index)
    {
        temp = temp->next;
        prev = prev->next;
        count++;
    }
    prev->next = current;
    current->next = temp;
}

void InsertAtLast(struct node *head, int data)
{
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    current->next = NULL;

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = current;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;
    int negCount = 1;
    int i, a;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            InsertInBetween(head, a, negCount);
            negCount++;
        }
        else if (a % 2 == 0)
            head = InsertAtFirst(head, a);
        else
            InsertAtLast(head, a);
    }
    display(head);
}