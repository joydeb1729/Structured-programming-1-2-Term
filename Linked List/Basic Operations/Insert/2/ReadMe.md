# Singly Linked List Insert Operation in C

This C program demonstrates basic operations on a singly linked list, including insertion at various positions and displaying the list. The key functions implemented are:

- **`display`**: Traverses and prints the linked list starting from the given node.
- **`InsertAtFirst`**: Inserts a new node with the given value at the beginning of the list. This function updates the head of the list.
- **`InsertInBetween`**: Inserts a new node with the specified value at a given index in the list. This function assumes that the index is valid and within the bounds of the list.
- **`InsertAfterNode`**: Inserts a new node with the specified value immediately after a given node in the list.
- **`InsertAtEnd`**: Inserts a new node with the given value at the end of the list.

## How It Works

1. **Initialization**: The program initializes a linked list with three nodes, each containing integer values (100, 200, 300) and links them sequentially.

2. **Display Operations**: The `display` function is used to print the current state of the linked list.

3. **Insertion Operations**:
   - **At the Beginning**: A new node is added at the start of the list.
   - **In Between Nodes**: A new node is inserted at a specified index, shifting subsequent nodes as needed.
   - **After a Specific Node**: A new node is added directly after a given node.
   - **At the End**: A new node is appended to the end of the list.

This program demonstrates fundamental linked list operations and provides a clear example of how to manage and modify a linked list in C.
