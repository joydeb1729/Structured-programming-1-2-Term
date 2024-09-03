#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};

int isPrime(int n)
{
    int root = (int)sqrt((double)n);
    int c = 0, i;

    if (n == 1)
        return c;

    for (i = 2; i <= root; i++)
    {
        if (n % i == 0)
        {
            c = 1;
            break;
        }
    }

    if (c)
        return 0;
    else
        return 1;
}

void display(struct node *head)
{
    struct node *temp;
    temp = head;

    while (temp != NULL)
    {
        if (isPrime(temp->data))
            printf("%d ", temp->data);

        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int i, n;

    struct node *head, *temp, *current;

    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter Numbers: \n");
    scanf("%d", &n);
    head->data = n;
    head->next = NULL;
    temp = head;

    for (i = 0; i < 10; i++)
    {
        current = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &current->data);
        current->next = NULL;
        temp->next = current;
        temp = current;
    }

    display(head);

    return 0;
}
