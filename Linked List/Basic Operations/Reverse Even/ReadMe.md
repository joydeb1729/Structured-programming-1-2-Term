## Reversing Even Numbers in a Singly Linked List

### Overview

This program processes a singly linked list and performs specific operations on its elements:
- It prints all odd numbers in their original order.
- It then prints all even numbers in reverse order.
- The list is traversed only once, and modifications are done in a single pass.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines a node in the singly linked list.
  - `int data`: Stores the data of the node.
  - `struct node *next`: Pointer to the next node in the list.

#### Functions

- **`struct node *currentNode(struct node *currentHead)`**: Processes the list starting from `currentHead`.
  - It prints all odd numbers in their original order.
  - It collects all even numbers into an array and prints them in reverse order.

  - **Parameters**: 
    - `currentHead`: Pointer to the head of the list or current segment to be processed.
  - **Returns**:
    - The pointer to the next node after the even numbers.

#### `main()` Function

- **Initialization**: 
  - Creates the head node of the list and populates it with user input.
  - Builds the linked list by appending nodes based on user input.

- **Processing**:
  - Traverses the list and calls `currentNode` to process and print the nodes.

  - **Input**:
    - The number of nodes followed by node values.

  - **Output**:
    - Odd numbers in their original order.
    - Even numbers in reverse order.

