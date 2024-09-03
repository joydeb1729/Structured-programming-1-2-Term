## Sorted Linked List Insertion

### Problem Description

The goal of this program is to maintain a singly linked list in sorted order. As new elements are inserted, the program ensures that the linked list remains sorted by placing each new element in its correct position.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines the structure of each node in the linked list.
  - `int data`: Stores the value of the node.
  - `struct node *next`: Pointer to the next node in the list.

#### Functions

- **`void display(struct node *head)`**: Prints the entire linked list from the head node to the end. It traverses the list and prints each node's data followed by a space.

- **`struct node *InsertAtFirst(struct node *head, int element)`**: Inserts a new node with the given `element` at the beginning of the list. The new node becomes the new head of the list.

- **`void InsertAtEnd(struct node *head, int element)`**: Inserts a new node with the given `element` at the end of the list. It traverses to the last node and sets its `next` pointer to the new node.

- **`void InsertInBetween(struct node *head, int index, int element)`**: Inserts a new node with the given `element` at a specific position (`index`). It places the new node between the nodes at `index` and `index+1`.

- **`int findIndex(struct node *head, int element)`**: Finds the index where the given `element` should be inserted to maintain sorted order. It traverses the list and compares each node's data with the given `element`.

- **`int findLength(struct node *head)`**: Calculates the length of the linked list by traversing from the head to the end.

#### `main()` Function

- **Initialization**: Initializes the head of the linked list and displays it.
- **Insertion Loop**: Continuously prompts the user for a number and determines where to insert it:
  - If the index is `0`, the element is inserted at the beginning.
  - If the index equals the length of the list, the element is inserted at the end.
  - Otherwise, it is inserted in between, just before the node where it should go.

The program ensures that the linked list remains sorted after each insertion.
