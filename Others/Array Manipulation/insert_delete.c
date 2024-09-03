#include <stdio.h>

void insertElement(int *arr, int *size, int index, int element)
{
    int i;
    for (i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    *size = *size + 1;
}

void deleteElement(int *arr, int *size, int index)
{
    int i;
    for (i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    *size = *size - 1;
}

int main()
{
    int i, size, n, index, element;

    printf("Enter the Array Size : ");
    scanf("%d", &size);

    printf("Enter the elements of the Array : \n");
    int arr[1001];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter 1 to insert or 2 to delete : ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Enter the index and the element you want to insert : ");
        scanf("%d%d", &index, &element);
        insertElement(arr, &size, index - 1, element);
    }
    else if (n == 2)
    {
        printf("Enter the index you want to delete : ");
        scanf("%d", &index);
        deleteElement(arr, &size, index - 1);
    }

    printf("Operation Successful!\n");
    printf("New Array : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("New Size of the Array : %d", size);

    return 0;
}