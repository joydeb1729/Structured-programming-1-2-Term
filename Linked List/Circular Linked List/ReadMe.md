## Circular Linked List Display

### Overview

This program creates a circular singly linked list and displays its elements in a circular manner. The list is created based on user input, and the elements are printed in a circular sequence.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines a node in the singly linked list.
  - `int data`: Stores the data of the node.
  - `struct node *next`: Pointer to the next node in the list.

#### Functions

- **`void ShowCircle(struct node *head)`**: Prints the elements of the circular linked list starting from `head`.
  - **Parameters**:
    - `head`: Pointer to the head of the circular linked list.
  - **Functionality**:
    - Uses a `do-while` loop to traverse and print each node's data until it returns to the `head`.

#### `main()` Function

- **Initialization**:
  - Creates the head node of the list and reads values from the user.
  - Constructs the linked list by appending new nodes based on user input.

- **Processing**:
  - Constructs the circular linked list by ensuring the last node points back to the `head`.
  - Calls `ShowCircle` to display the elements of the circular linked list.

  - **Input**:
    - 5 integers entered by the user for node values.

  - **Output**:
    - The elements of the circular linked list printed in circular order.