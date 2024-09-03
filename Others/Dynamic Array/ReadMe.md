# Dynamic Array Management

### Overview

This C program demonstrates dynamic memory management for arrays using a custom abstract data type (ADT). It defines a structure for managing arrays, including functions to create, set, and display the array.

### Code Explanation

#### Data Structures

- **`struct ADT`**: Represents a dynamic array with metadata.
  - **`int usedSize`**: Number of elements currently used in the array.
  - **`int totalSize`**: Total allocated size of the array.
  - **`int *ptr`**: Pointer to the dynamically allocated array.

#### Functions

- **`void creatArray(struct ADT *arr, int uSize, int tSize)`**: Initializes the array structure with a specified used size and total size, and allocates memory for the array.
  - **Parameters**:
    - `arr`: Pointer to the `struct ADT` to be initialized.
    - `uSize`: Number of elements to be used in the array.
    - `tSize`: Total number of elements allocated in the array.
  - **Behavior**:
    - Sets the `totalSize` and `usedSize` of the array.
    - Allocates memory for `ptr` to hold `tSize` integers.

- **`void setArray(struct ADT *arr)`**: Reads integers from input and sets them in the array up to the `usedSize`.
  - **Parameters**:
    - `arr`: Pointer to the `struct ADT` containing the array.
  - **Behavior**:
    - Reads `usedSize` integers from the standard input and stores them in the array.

- **`void showArray(struct ADT *arr)`**: Displays the elements of the array up to the `usedSize`.
  - **Parameters**:
    - `arr`: Pointer to the `struct ADT` containing the array.
  - **Behavior**:
    - Prints the elements of the array, separated by spaces.

#### `main()` Function

- **Initialization**:
  - Declares a variable `arr` of type `struct ADT`.

- **Processing**:
  - Calls `creatArray(&arr, 5, 10)` to create an array with a used size of 5 and a total size of 10.
  - Calls `setArray(&arr)` to read and set 5 integers in the array.
  - Calls `showArray(&arr)` to print the elements of the array.

- **Termination**:
  - Returns 0, indicating successful execution.

### Example Usage

1. **Input**:
    ```
    10 20 30 40 50
    ```

2. **Output**:
    ```
    10 20 30 40 50 
    ```

### Notes

- The program assumes that the input size does not exceed `usedSize`.
- Memory allocated for the array is not freed in this example. In a real application, consider adding code to free allocated memory to avoid memory leaks.
