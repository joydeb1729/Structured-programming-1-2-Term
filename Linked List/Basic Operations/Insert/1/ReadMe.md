# Singly Linked List with Ordered Insertion in C

This C program demonstrates how to manage a singly linked list with ordered insertion operations. The program includes functions for displaying the list and inserting nodes in a sorted manner.

## Code Explanation

1. **`struct node`**: Defines the structure of a node in the linked list, containing an integer `data` and a pointer `next` to the next node.

2. **`void show(struct node *head)`**: Traverses the linked list starting from the given `head` node and prints each node's data. The traversal continues until the end of the list is reached.

3. **`struct node *Insert(struct node *head, int element)`**: Inserts a new node with the specified `element` into the list while maintaining the sorted order:
   - Allocates memory for a new node and initializes it with `element`.
   - Traverses the list to find the correct position for insertion.
   - Handles insertion at the beginning, in between nodes, or at the end of the list.
   - Returns the new head of the list if the insertion is at the beginning.

4. **`int main()`**:
   - Initializes the linked list with nodes containing values 2 and 4.
   - Uses a loop to create and link additional nodes.
   - Demonstrates the `show` and `Insert` functions:
     - Displays the initial list.
     - Inserts nodes with values 1, 3, and 5 at various positions (beginning, middle, end) and shows the updated list after each insertion.

This program provides a practical example of managing a singly linked list, including maintaining order during insertions.
