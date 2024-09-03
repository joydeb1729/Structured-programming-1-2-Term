## Graph Pathfinding with Node Linking

### Overview

This program finds and prints all possible paths between nodes in an undirected graph, where nodes are linked based on given costs. It utilizes depth-first search (DFS) to explore and display each path from a source node to a destination node.

### Code Explanation

#### Data Structure

- **`struct node`**: Represents a graph node.
  - **`int id`**: Node identifier.
  - **`int cost`**: Cost associated with the edge.
  - **`struct node *link`**: Pointer to the next node in the adjacency list.

- **`struct node nodes[100]`**: Array to store nodes in the graph.

- **`int nodeCount`**: Counter to keep track of the number of nodes in the graph.

#### Functions

- **`void addNode(int id)`**: Adds a new node to the graph if it does not already exist.
  - **Parameters**:
    - `id`: Node identifier to be added.

- **`void linkNode(int id, int neighbor, int cost)`**: Links a node to its neighbor with a given cost.
  - **Parameters**:
    - `id`: Node identifier.
    - `neighbor`: Neighbor node identifier.
    - `cost`: Cost associated with the edge.

- **`int isInPath(int *path, int length, int id)`**: Checks if a node is already in the current path.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `length`: Number of nodes in the current path.
    - `id`: Node identifier to check.
  - **Returns**:
    - `1` if the node is in the path, `0` otherwise.

- **`void search(int *path, int length, int destination)`**: Performs depth-first search (DFS) to find all paths from the current node to the destination.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `length`: Number of nodes in the current path.
    - `destination`: Target destination node.

#### `main()` Function

- **Initialization**:
  - Reads node and edge data until `0 0 0` is entered.

- **Processing**:
  - Adds nodes and links between them.
  - Reads source and destination nodes.

- **Execution**:
  - Initializes the path with the source node.
  - Starts the search to find and print all paths from the source to the destination.

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
    Starting traversal from: 1
    New node in the path : 2
    New node in the path : 3
    New node in the path : 4
    New node in the path : 5
    [ A Possible Path: 1 2 3 4 5 ]
    Going back in path from 5 to 4
    Going back in path from 4 to 3
    Going back in path from 3 to 2
    Going back in path from 2 to 1
    ```

### Notes

- The program handles an undirected graph and finds all possible paths between a given source and destination using DFS.
- Ensure to enter node and edge data in the correct format and end input with `0 0 0`.
