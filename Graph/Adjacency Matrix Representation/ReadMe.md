## Adjacency Matrix Representation of a Graph

### Overview

This program constructs an adjacency matrix representation of a graph based on user input. It stores the graph's edge weights and prints the matrix up to the number of edges provided by the user. The matrix is updated dynamically based on the input data.

### Code Explanation

#### Data Structure

- **`int graph[100][100]`**: 2D array to store the adjacency matrix of the graph, where `graph[i][j]` represents the weight of the edge between nodes `i` and `j`.

- **`int _index[110]`**: Array to keep track of node identifiers. It helps in identifying node indices.

#### Functions

- **`int find_index(int num)`**: Finds the index of a given node in the `_index` array.
  - **Parameters**:
    - `num`: Node identifier to search for.
  - **Returns**:
    - Index of the node if found, `-1` otherwise.

- **`void printMatrix(int count)`**: Prints the adjacency matrix up to the number of edges specified by `count`.
  - **Parameters**:
    - `count`: Number of edges to be considered for printing.
  - **Functionality**:
    - Iterates through the `graph` array and prints non-zero values up to the specified count.

#### `main()` Function

- **Initialization**:
  - Reads triplets of integers representing edges until `0 0 0` is entered.

- **Processing**:
  - For each triplet `(x, y, n)`, it updates the adjacency matrix:
    - If both nodes are new, it initializes their entries in the matrix.
    - If only one node is new, it updates the existing entries.
    - If both nodes are already present, it updates the matrix entry for the edge.

- **Printing**:
  - Calls `printMatrix` to display the adjacency matrix up to the specified number of edges.

  - **Input**:
    - Triplets of integers representing edges and their weights until `0 0 0` is entered.

  - **Output**:
    - Adjacency matrix of the graph with the specified number of edges.
