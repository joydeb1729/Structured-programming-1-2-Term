#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int findLength(struct node *head)
{
    int i = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }

    return i;
}
void deleteNode(struct node *head)
{
    struct node *prev, *current, *temp;

    prev = head;
    current = head->next;
    while (current != NULL && prev->data > current->data)
    {
        temp = prev;
        prev = prev->next;
        current = current->next;
    }
    if (prev->next == NULL)
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = current;
    }
}
void show(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, i;
        scanf("%d%d", &n, &k);
        struct node *head = (struct node *)malloc(sizeof(struct node));
        struct node *temp;

        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                scanf("%d", &head->data);
                head->next = NULL;
                temp = head;
            }
            else
            {
                struct node *current = (struct node *)malloc(sizeof(struct node));
                scanf("%d", &current->data);
                current->next = NULL;
                temp->next = current;
                temp = current;
            }
        }

        while (1)
        {
            int length = findLength(head);

            if (length = n - k)
                break;

            else
                deleteNode(head);
        }

        show(head);
    }

    return 0;
}