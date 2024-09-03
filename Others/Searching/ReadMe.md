# Searching Algorithms

### Overview

This C program demonstrates two fundamental searching algorithms: Linear Search and Binary Search. The program includes functions for each algorithm and shows how they can be used to find elements in arrays.

### Code Explanation

#### Functions

- **`int LinearSearch(int *arr, int size, int element)`**: Performs a linear search on an unsorted array.
  - **Parameters**:
    - `arr`: Pointer to the array to be searched.
    - `size`: Number of elements in the array.
    - `element`: The element to search for.
  - **Returns**: The index of the element if found; otherwise, returns `-1`.

- **`int BinarySearch(int *arr2, int size, int element)`**: Performs a binary search on a sorted array.
  - **Parameters**:
    - `arr2`: Pointer to the sorted array to be searched.
    - `size`: Number of elements in the array.
    - `element`: The element to search for.
  - **Returns**: The index of the element if found; otherwise, returns `-1`.

#### `main()` Function

- **Linear Search**:
  - Declares an unsorted array `arr` and calculates its size.
  - Searches for the element `34` in the array using `LinearSearch`.
  - Prints the position of the found element (if found).

- **Binary Search**:
  - Declares a sorted array `arr2` and calculates its size.
  - Searches for the element `67` in the array using `BinarySearch`.
  - Prints the position of the found element (if found).

### Example Usage

1. **Linear Search**:
    - **Array**: `{1, 12, 2, 34, 5, 56, 67, 45, 67, 123, 89}`
    - **Element to Find**: `34`
    - **
