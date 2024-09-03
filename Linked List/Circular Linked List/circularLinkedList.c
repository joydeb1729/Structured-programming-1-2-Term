#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void ShowCircle(struct node *head)
{
    struct node *temp = head;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;

    } while (temp != head);

    printf("\n");
}

int main()
{

    struct node *head, *temp, *current;
    head = (struct node *)malloc(sizeof(struct node));
    int i;

    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            scanf("%d", &head->data);
            head->next = NULL;
            temp = head;
        }
        else
        {
            current = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &current->data);
            temp->next = current;
            current->next = NULL;
            temp = current;
        }
    }

    ShowCircle(head);

    return 0;
}