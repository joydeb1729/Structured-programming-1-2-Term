# Swapping Nodes in Pairs

### Overview

This C program demonstrates how to swap adjacent nodes in a singly linked list. It reads a list of integers from the user, performs the swap operation, and then displays the original and modified lists.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines the node structure for the singly linked list.
  - **`int data`**: The data stored in the node.
  - **`struct node *next`**: Pointer to the next node in the list.

#### Functions

- **`void display(struct node *head)`**: Prints all elements in the linked list from the given head node.
  - **Parameters**:
    - `head`: Pointer to the head of the linked list.
  - **Returns**: Nothing.

- **`struct node *swapDouble(struct node *head)`**: Swaps every two adjacent nodes in the linked list.
  - **Parameters**:
    - `head`: Pointer to the head of the linked list.
  - **Returns**: Pointer to the new head of the modified linked list.
  - **Behavior**:
    - Creates a new list where every pair of nodes is swapped.
    - Uses temporary nodes to store and swap the data of adjacent nodes.
    - Adjusts pointers to reflect the swapped order.

#### `main()` Function

- Initializes a linked list by reading 8 integers from the user.
- Calls `display()` to print the original list.
- Calls `swapDouble()` to perform the node swapping.
- Calls `display()` again to print the modified list.

### Example Usage

1. **Input**: User enters a sequence of 8 integers, for example:
    ```
    1 2 3 4 5 6 7 8
    ```
2. **Output**:
    - **Original List**: `1 2 3 4 5 6 7 8`
    - **Swapped List**: `2 1 4 3 6 5 8 7`

### Notes

- The program assumes that the number of nodes in the list is even. If the list has an odd number of nodes, the last node will remain unswapped.
- The `swapDouble` function uses dynamic memory allocation (`malloc`) for temporary nodes to facilitate swapping.
- Proper error handling for memory allocation and edge cases (e.g., empty list) should be considered for a more robust implementation.

