# Finding Triangle

### Overview

This C program finds and prints all paths of length 3 (triangles) in an undirected graph that start at a specified source node and end at a specified destination node. It uses depth-first search (DFS) to explore the graph.

### Code Explanation

#### Data Structures

- **`struct node`**: Represents a node in the graph with a linked list for its neighbors.
  - **`int nodeid`**: Node identifier.
  - **`int cost`**: Cost associated with the edge (not used in path finding).
  - **`struct node *link`**: Pointer to the next neighbor node.

- **`struct node nodes[100]`**: Array to store the nodes of the graph.

- **`int nodecount`**: Counter for the number of nodes in the graph.

- **`int source`**: Source node from which to start paths.

- **`int destination`**: Destination node at which paths should end.

#### Functions

- **`void addnode(int nodeid)`**: Adds a node to the graph if it does not already exist.
  - **Parameters**:
    - `nodeid`: Node identifier.

- **`void addlink(int nodeid, int linkid, int linkcost)`**: Adds a link between two nodes.
  - **Parameters**:
    - `nodeid`: Node identifier.
    - `linkid`: Identifier of the node linked to `nodeid`.
    - `linkcost`: Cost associated with the link (not used in path finding).

- **`int isinpath(int *path, int count, int nodeid)`**: Checks if a node is already in the current path.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the current path.
    - `nodeid`: Node identifier to check.
  - **Returns**:
    - `1` if the node is in the path, `0` otherwise.

- **`void search(int *path, int count)`**: Performs DFS to find all paths of length 3 that start at `source` and end at `destination`.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the current path.

#### `main()` Function

- **Initialization**:
  - Reads node and edge data until `0 0 0` is entered.

- **Processing**:
  - Adds nodes and links between them.

- **Execution**:
  - Reads source and destination nodes.
  - Initializes the path with the source node and performs a search for paths.
  - Prints all found paths of length 3 that end at the destination node.

### Example Usage

1. **Input**:
    ```
    1 2 10
    2 3 20
    3 4 30
    4 1 40
    1 5 50
    5 6 60
    6 7 70
    0 0 0
    1 4
    ```

2. **Output**:
    ```
    1 2 3 4
    ```

### Notes

- The program is designed to work with undirected graphs.
- Only paths of exactly length 3 are considered.
- The `source` and `destination` nodes are used to filter and find valid paths.
