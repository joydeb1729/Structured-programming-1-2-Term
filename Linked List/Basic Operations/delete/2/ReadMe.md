# Linked List Node Deletion Based on Length and Value

This C program performs operations on a singly linked list, specifically focusing on deleting nodes to achieve a desired list length based on input values. It includes functions to find the length of the list, delete nodes, and display the list. The following operations are implemented:

## Functions

1. **`int findLength(struct node *head)`**: Computes and returns the number of nodes in the linked list by traversing it from the `head` node.

2. **`void deleteNode(struct node *head)`**: Deletes nodes from the linked list based on their values. It searches for the first occurrence where a node's data is less than or equal to the next node's data and adjusts pointers to remove the node. If the list becomes shorter than desired, it will keep removing nodes until the length matches the specified value.

3. **`void show(struct node *head)`**: Prints the data of each node in the linked list, starting from the `head`, until the end of the list is reached.

## Main Operations

1. **Input Reading**: The program reads the number of test cases and, for each test case, reads the number of nodes `n` and the number `k` representing the desired length of the list.

2. **Linked List Construction**: Constructs the linked list by dynamically allocating memory for each node and linking them sequentially based on input values.

3. **Node Deletion Loop**: Continuously deletes nodes from the list until the length of the list is reduced to `n - k`. It uses the `deleteNode` function to manage this process.

4. **Display**: After the deletion operations are complete for each test case, the resulting list is displayed using the `show` function.

## How It Works

1. **Initialization**: The program initializes the linked list with `n` nodes based on user input.

2. **Deletion Process**: The `deleteNode` function removes nodes to reduce the length of the list. The deletion continues until the length of the list matches `n - k`.

3. **Result Display**: After adjusting the list length, the final state of the linked list is printed.

This program demonstrates basic operations for managing a singly linked list, including calculating length, deleting nodes based on value comparisons, and displaying the final list after modifications.
