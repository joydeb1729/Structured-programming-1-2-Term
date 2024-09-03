# Queue Implementation

### Overview

This C program demonstrates a simple implementation of a queue data structure. It includes functions to enqueue (add) elements, dequeue (remove) elements, and print the contents of the queue.

### Code Explanation

#### Data Structure

- **`struct queue`**: Defines the queue structure.
  - **`int front`**: Index of the front element in the queue.
  - **`int back`**: Index where the next element will be added.
  - **`int *arr`**: Pointer to an array storing the queue elements.
  - **`int size`**: Maximum number of elements the queue can hold.

#### Functions

- **`void printQueue(struct queue *q)`**: Prints all elements in the queue from `front` to `back`.
  - **Parameters**:
    - `q`: Pointer to the queue structure.
  - **Returns**: Nothing.

- **`void enqueue(struct queue *q, int element)`**: Adds an element to the back of the queue.
  - **Parameters**:
    - `q`: Pointer to the queue structure.
    - `element`: The element to add to the queue.
  - **Returns**: Nothing.
  - **Behavior**: Prints "Queue is full!" if the queue is at capacity.

- **`int dequeue(struct queue *q)`**: Removes an element from the front of the queue.
  - **Parameters**:
    - `q`: Pointer to the queue structure.
  - **Returns**: The removed element or `-1` if the queue is empty.
  - **Behavior**: Prints "Queue is empty!" if the queue is empty.

#### `main()` Function

- Initializes a queue with a maximum size of 4.
- Allocates memory for the queue's array.
- Performs the following operations:
  - Adds elements `10`, `20`, and `30` to the queue.
  - Removes one element from the queue.
  - Prints the remaining elements in the queue.

### Example Usage

1. **Operations**:
    - **Enqueue** `10`: Prints `10 is added`.
    - **Enqueue** `20`: Prints `20 is added`.
    - **Enqueue** `30`: Prints `30 is added`.
    - **Dequeue**: Removes `10` and prints `10 is removed`.
    - **Print Queue**: Displays remaining elements `20` and `30`.

### Notes

- The queue is implemented using an array with fixed size.
- The `front` and `back` pointers manage the positions of the first and next elements respectively.
- Ensure proper handling of queue overflow and underflow conditions.
