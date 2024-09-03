## Doubly Linked List Traversal

### Overview

This program creates a doubly linked list and provides functions to traverse and display the list from both the left-to-right and right-to-left directions. It reads node values from user input and prints the list in both orders.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines a node in the doubly linked list.
  - `int data`: Stores the data of the node.
  - `struct node *next`: Pointer to the next node in the list.
  - `struct node *prev`: Pointer to the previous node in the list.

#### Functions

- **`void ShowFromLeft(struct node *head)`**: Prints the elements of the doubly linked list from the head to the end.
  - **Parameters**:
    - `head`: Pointer to the head of the doubly linked list.
  - **Functionality**:
    - Traverses the list from the head node to the end, printing each node's data.

- **`void ShowFromRight(struct node *tale)`**: Prints the elements of the doubly linked list from the end to the head.
  - **Parameters**:
    - `tale`: Pointer to the tail (last node) of the doubly linked list.
  - **Functionality**:
    - Traverses the list from the tail node to the head, printing each node's data.

#### `main()` Function

- **Initialization**:
  - Creates the head node of the list and reads values from the user.
  - Constructs the doubly linked list by appending new nodes based on user input.

- **Processing**:
  - Uses `ShowFromLeft` to display the list from the beginning to the end.
  - Uses `ShowFromRight` to display the list from the end to the beginning.

  - **Input**:
    - 5 integers entered by the user for node values.

  - **Output**:
    - The elements of the doubly linked list printed from left to right.
    - The elements of the doubly linked list printed from right to left.
