#include <stdio.h>
#include <stdlib.h>

struct ADT
{
    int usedSize;
    int totalSize;
    int *ptr;
};

void creatArray(struct ADT *arr, int uSize, int tSize)
{
    arr->totalSize = tSize;
    arr->usedSize = uSize;
    arr->ptr = (int *)malloc(tSize * sizeof(int));
}
void setArray(struct ADT *arr)
{
    int i, x;

    for (i = 0; i < arr->usedSize; i++)
    {
        scanf("%d", &(arr->ptr)[i]);
    }
}

void showArray(struct ADT *arr)
{
    int i;

    for (i = 0; i < arr->usedSize; i++)
    {
        printf("%d ", (arr->ptr)[i]);
    }
}

int main()
{
    struct ADT arr;
    creatArray(&arr, 5, 10);
    setArray(&arr);
    showArray(&arr);

    return 0;
}