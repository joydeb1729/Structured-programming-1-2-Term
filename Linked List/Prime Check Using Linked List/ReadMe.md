## Prime Number Extraction from Linked List

### Overview

This program creates a singly linked list and extracts prime numbers from the list. It reads node values from the user and prints only the prime numbers.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines a node in the singly linked list.
  - `int data`: Stores the data of the node.
  - `struct node *next`: Pointer to the next node in the list.

#### Functions

- **`int isPrime(int n)`**: Checks if a number `n` is a prime number.
  - **Parameters**:
    - `n`: The number to check.
  - **Returns**:
    - `1` if `n` is a prime number.
    - `0` if `n` is not a prime number.
  - **Functionality**:
    - Uses trial division up to the square root of `n` to determine primality.

- **`void display(struct node *head)`**: Prints the prime numbers from the linked list.
  - **Parameters**:
    - `head`: Pointer to the head of the singly linked list.
  - **Functionality**:
    - Traverses the list, uses `isPrime` to check each node's data, and prints the data if it is a prime number.

#### `main()` Function

- **Initialization**:
  - Creates the head node of the list and reads the first value from the user.
  - Constructs the linked list by appending new nodes based on user input.

- **Processing**:
  - Reads 11 integers (including the head node) from the user.
  - Uses `display` to print only the prime numbers from the linked list.

  - **Input**:
    - 11 integers entered by the user for node values.

  - **Output**:
    - The prime numbers extracted from the linked list and printed.
