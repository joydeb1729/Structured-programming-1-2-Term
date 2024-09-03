# Array Manipulation Program

This C program demonstrates basic operations on a dynamic array, specifically inserting and deleting elements. The program allows users to modify an array by either inserting a new element at a specified index or deleting an element from a specified index.

## Functions

1. **`void insertElement(int *arr, int *size, int index, int element)`**: Inserts a new element into the array at the specified index. The function shifts subsequent elements one position to the right to make space for the new element and updates the array's size.

2. **`void deleteElement(int *arr, int *size, int index)`**: Deletes an element from the array at the specified index. The function shifts subsequent elements one position to the left to fill the gap created by the removed element and updates the array's size.

## Main Operations

1. **Array Initialization**: The user is prompted to enter the initial size of the array and its elements. The program reads these values and stores them in an array.

2. **User Choices**: The user is prompted to choose between inserting or deleting an element:
   - **Insert**: The user provides an index and an element to be inserted. The program then calls `insertElement` to add the new element.
   - **Delete**: The user provides an index of the element to be deleted. The program then calls `deleteElement` to remove the specified element.

3. **Result Display**: After performing the requested operation, the program displays the updated array and its new size.

## How It Works

1. **Input Handling**: The program reads the size of the array and its elements from the user.

2. **Perform Operation**: Based on the user's choice, the program either inserts a new element at a specified position or deletes an element from a specified position.

3. **Output**: The updated array and its new size are displayed after the operation is completed successfully.

This program demonstrates basic array manipulation techniques, including insertion and deletion operations, and provides a simple interface for interacting with dynamic arrays in C.
