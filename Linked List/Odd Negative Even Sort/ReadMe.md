## Sorted Linked List Insertion

### Overview

This program maintains a singly linked list and inserts elements based on their values and position criteria. It performs the following operations:
- Inserts negative numbers in increasing order, maintaining their relative order in the middle of the list.
- Inserts even numbers at the beginning of the list.
- Inserts odd numbers at the end of the list.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines a node in the linked list.
  - `int data`: Stores the data of the node.
  - `struct node *next`: Pointer to the next node in the list.

#### Functions

- **`void display(struct node *head)`**: Prints all elements of the linked list starting from the `head` node. It traverses the list and prints each node's data.

- **`struct node *InsertAtFirst(struct node *head, int data)`**: Inserts a new node with the given `data` at the beginning of the list. This function creates a new node and sets it as the new head of the list.

- **`void InsertInBetween(struct node *head, int data, int index)`**: Inserts a new node with the given `data` at a specified `index` (1-based) in the list. It traverses the list to the position before the `index` and adjusts pointers to insert the new node.

- **`void InsertAtLast(struct node *head, int data)`**: Inserts a new node with the given `data` at the end of the list. It traverses to the last node and appends the new node.

#### `main()` Function

- **Initialization**: Creates the head node of the list with `data = 1` and `next = NULL`.

- **Processing Input**:
  - Reads 7 integers from the user.
  - Inserts negative numbers in increasing order in the middle of the list, preserving their order.
  - Inserts even numbers at the beginning of the list.
  - Inserts odd numbers at the end of the list.

- **Display**: Prints the final linked list after all insertions.
