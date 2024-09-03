#include <stdio.h>

int LinearSearch(int *arr, int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }

    return -1;
}

int BinarySearch(int *arr2, int size, int element)
{
    int low = 0, high = size - 1;
    int mid;
    while (high >= low)
    {
        mid = (high + low) / 2;

        if (arr2[mid] == element)
            return mid;

        else if (arr2[mid] < element)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int i, size, index, element;

    // Linear Search for non-sorted array
    int arr[] = {1, 12, 2, 34, 5, 56, 67, 45, 67, 123, 89};
    size = sizeof(arr) / sizeof(int);
    element = 34;
    index = LinearSearch(arr, size, element);
    printf("%d is found at no. %d position.\n", element, index + 1);

    // Binary Search for sorted array
    int arr2[] = {1, 12, 22, 34, 45, 56, 67, 145, 267, 523, 1089};
    size = sizeof(arr2) / sizeof(int);
    element = 67;
    index = BinarySearch(arr2, size, element);
    printf("%d is found at no. %d position.\n", element, index + 1);

    return 0;
}
