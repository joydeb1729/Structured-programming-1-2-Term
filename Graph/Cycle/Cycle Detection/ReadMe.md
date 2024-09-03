## Graph Cycle Detection

### Overview

This C program detects all cycles in an undirected graph using depth-first search (DFS). It stores and prints all unique cycles found in the graph.

### Code Explanation

#### Data Structures

- **`struct node`**: Represents a graph node with linked list for neighbors.
  - **`int nodeid`**: Node identifier.
  - **`int cost`**: Cost associated with the edge (not used in cycle detection).
  - **`struct node *link`**: Pointer to the next neighbor node.

- **`struct node nodes[100]`**: Array to store nodes in the graph.

- **`int nodecount`**: Counter for the number of nodes in the graph.

- **`int source`**: Source node (not used in cycle detection).

- **`int destination`**: Destination node (not used in cycle detection).

- **`int cycles[1000][100]`**: Array to store detected cycles.

- **`int cyclecount`**: Counter for the number of cycles detected.

#### Functions

- **`void addnode(int nodeid)`**: Adds a new node to the graph if it does not already exist.
  - **Parameters**:
    - `nodeid`: Node identifier.

- **`void addlink(int nodeid, int linkid, int linkcost)`**: Links a node to its neighbor.
  - **Parameters**:
    - `nodeid`: Node identifier.
    - `linkid`: Neighbor node identifier.
    - `linkcost`: Cost associated with the edge (not used in cycle detection).

- **`int isinpath(int *path, int count, int nodeid)`**: Checks if a node is already in the current path.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the current path.
    - `nodeid`: Node identifier to check.
  - **Returns**:
    - `1` if the node is in the path, `0` otherwise.

- **`void printpath(int *path, int count)`**: Prints a path.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the path.

- **`int comparecycle(int *path, int count)`**: Checks if the current path is a cycle that has already been detected.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the path.
  - **Returns**:
    - `1` if the path is a known cycle, `0` otherwise.

- **`int countnodesincycle(int cindex)`**: Counts the number of nodes in a detected cycle.
  - **Parameters**:
    - `cindex`: Index of the cycle.
  - **Returns**:
    - Number of nodes in the cycle.

- **`int compcycle(int *path, int count, int cindex)`**: Compares the current path with a known cycle.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the path.
    - `cindex`: Index of the known cycle.
  - **Returns**:
    - `1` if the path matches the known cycle, `0` otherwise.

- **`void storecycle(int *path, int count)`**: Stores a new cycle if it is not already detected.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the path.

- **`void search(int *path, int count)`**: Performs DFS to find all cycles in the graph.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the current path.

#### `main()` Function

- **Initialization**:
  - Reads node and edge data until `0 0 0` is entered.

- **Processing**:
  - Adds nodes and links between them.

- **Execution**:
  - Initializes the path with each node as the starting point and searches for cycles.
  - Prints all detected cycles.

### Example Usage

1. Input:
    ```
    1 2 10
    2 3 20
    3 4 30
    4 1 40
    5 6 50
    6 7 60
    7 5 70
    0 0 0
    ```

2. Output:
    ```
    [1 2 3 4 1]
    [5 6 7 5]
    ```

### Notes

- The program handles undirected graphs and detects cycles using DFS.
- The `storecycle` function ensures only unique cycles are stored.
- The `comparecycle` function helps avoid storing duplicate cycles.
