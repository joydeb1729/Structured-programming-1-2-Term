# Singly Linked List with Deletion Operations in C

This C program demonstrates various methods for deleting nodes in a singly linked list. The program includes functions for deleting nodes at specific positions, as well as nodes with specific values. The following operations are implemented:

## Functions

1. **`display(struct Node *ptr)`**: Traverses and prints the linked list starting from the given `ptr` node. It prints each node's data until the end of the list is reached.

2. **`struct Node *DeleteAtFirst(struct Node *head)`**: Deletes the first node of the linked list. It updates the head to point to the second node and frees the memory of the original head node.

3. **`void DeleteInBetween(struct Node *head, int index)`**: Deletes a node at a specified index in the list. It requires traversing the list to reach the node just before the index, then adjusting pointers and freeing the node at the given index.

4. **`void DeleteNode(struct Node *head, struct Node *prevNode)`**: Deletes a node immediately after a given node (`prevNode`). It traverses the list to find `prevNode`, updates pointers to bypass the node to be deleted, and frees the memory of the deleted node.

5. **`void DeleteAtEnd(struct Node *head)`**: Deletes the last node of the list. It traverses the list to find the second-to-last node, updates its `next` pointer to `NULL`, and frees the memory of the last node.

6. **`void DeleteElement(struct Node *head, int element)`**: Deletes the first occurrence of a node with a specific value (`element`). It traverses the list to find the node with the specified value, updates pointers to bypass it, and frees the memory of the node.

## How It Works

1. **Initialization**: The program initializes a linked list with nodes containing values 50, 100, 150, 200, 250, and 300.

2. **Display Operations**: The `display` function is used to print the current state of the linked list before and after each deletion operation.

3. **Deletion Operations**:
   - **At the Beginning**: Removes the first node of the list.
   - **In Between Nodes**: Removes a node at a specified index (excluding the first and last positions).
   - **Specific Node**: Deletes a node given a reference to the node preceding it.
   - **At the End**: Removes the last node of the list.
   - **By Value**: Deletes the first occurrence of a node with a specific value.

This program demonstrates essential linked list deletion operations and provides a clear example of how to manage and modify a singly linked list in C.
