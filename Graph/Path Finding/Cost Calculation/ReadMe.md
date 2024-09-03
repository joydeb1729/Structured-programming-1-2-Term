## Graph Pathfinding with Cost Calculation

### Overview

This C program finds all possible paths between a source and a destination node in an undirected graph using depth-first search (DFS). It calculates the total cost for each path and identifies the path with the minimum cost.

### Code Explanation

#### Data Structures

- **`struct node`**: Represents a graph node with linked list for neighbors.
  - **`int id`**: Node identifier.
  - **`int cost`**: Cost associated with the edge to the neighbor.
  - **`struct node *link`**: Pointer to the next neighbor node.

- **`struct node nodes[100]`**: Array to store nodes in the graph.

- **`int nodeCount`**: Counter for the number of nodes in the graph.

- **`int totalCost`**: Tracks the total cost of the current path.

- **`int minCost`**: Tracks the minimum cost of all found paths, initialized to maximum integer value.

#### Functions

- **`void addNode(int id)`**: Adds a new node to the graph if it does not already exist.
  - **Parameters**:
    - `id`: Node identifier.

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

- **`void search(int *path, int length, int destination)`**: Performs DFS to find all paths from the current node to the destination, calculating and updating the total cost.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `length`: Number of nodes in the current path.
    - `destination`: Target node identifier.

#### `main()` Function

- **Initialization**:
  - Reads node and edge data until `0 0 0` is entered.

- **Processing**:
  - Adds nodes and links between them.
  - Reads source and destination nodes.

- **Execution**:
  - Initializes the path with the source node.
  - Starts the search to find all paths from the source to the destination.
  - Prints all possible paths and their costs.
  - Identifies and prints the path with the minimum cost.

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
    [ Total Cost: 100 ]
    Going back in path from 5 to 4
    Going back in path from 4 to 3
    Going back in path from 3 to 2
    Going back in path from 2 to 1
    New node in the path : 5
    [ A Possible Path: 1 5 ]
    [ Total Cost: 50 ]
    [ Minimum cost for going from 1 to 5 : 50 ]
    ```

### Notes

- The program handles an undirected graph and calculates the total cost for each path using DFS.
- Ensure to enter node and edge data in the correct format and end input with `0 0 0`.
- The `minCost` variable tracks the minimum cost among all found paths.
