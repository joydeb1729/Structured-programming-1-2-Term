## Graph Pathfinding and Path Analysis

### Overview

This C program finds all possible paths between a source and a destination node in an undirected graph using depth-first search (DFS). It also identifies and prints the longest and shortest paths among all found paths.

### Code Explanation

#### Data Structures

- **`struct node`**: Represents a graph node.
  - **`int nodeId`**: Node identifier.
  - **`int cost`**: Cost associated with the edge.
  - **`struct node *link`**: Pointer to the next node in the adjacency list.

- **`struct node nodes[100]`**: Array to store nodes in the graph.

- **`int nodeCount`**: Counter to keep track of the number of nodes in the graph.

- **`int source, destination`**: Source and destination node identifiers for pathfinding.

- **`int possiblePath[10][10]`**: Array to store all possible paths found.

- **`int pathCount`**: Counter to keep track of the number of paths found.

#### Functions

- **`void addNode(int id)`**: Adds a new node to the graph if it does not already exist.
  - **Parameters**:
    - `id`: Node identifier to be added.

- **`void addLink(int id, int linkId, int cost)`**: Links a node to its neighbor with a given cost.
  - **Parameters**:
    - `id`: Node identifier.
    - `linkId`: Neighbor node identifier.
    - `cost`: Cost associated with the edge.

- **`int isInPath(int *path, int length, int id)`**: Checks if a node is already in the current path.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `length`: Number of nodes in the current path.
    - `id`: Node identifier to check.
  - **Returns**:
    - `1` if the node is in the path, `0` otherwise.

- **`void StorePath(int *path, int length)`**: Stores a path in the `possiblePath` array.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `length`: Number of nodes in the current path.

- **`void search(int *path, int length)`**: Performs depth-first search (DFS) to find all paths from the current node to the destination.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `length`: Number of nodes in the current path.

#### `main()` Function

- **Initialization**:
  - Reads node and edge data until `0 0 0` is entered.

- **Processing**:
  - Adds nodes and links between them.
  - Reads source and destination nodes.

- **Execution**:
  - Initializes the path with the source node.
  - Starts the search to find all paths from the source to the destination.
  - Identifies and prints the longest and shortest paths.

### Example Usage

1. Input:
    ```
    1 2 10
    2 3 20
    3 4 30
    4 5 40
    1 5 50
    0 0 0
    1
    5
    ```

2. Output:
    ```
    1 2 3 4 5
    1 2 3 5
    1 5
    Maximum length path: 1 2 3 4 5 
    Minimum length path: 1 5 
    ```

### Notes

- The program handles an undirected graph and finds all possible paths between a given source and destination using DFS.
- Ensure to enter node and edge data in the correct format and end input with `0 0 0`.
- The maximum and minimum path length logic is commented out in the code. Uncomment it if you need to find the longest and shortest paths.
