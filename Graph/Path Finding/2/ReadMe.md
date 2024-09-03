## Graph Pathfinding

### Overview

This program finds and prints all possible paths in an undirected graph from a specified start node to an end node using depth-first search (DFS). The graph is represented using an adjacency matrix, and the program handles node indexing dynamically.

### Code Explanation

#### Data Structure

- **`int graph[100][100]`**: 2D array to store the adjacency matrix of the graph, where `graph[i][j]` represents the weight of the edge between nodes `i` and `j`.

- **`int indices[100]`**: Array to keep track of unique node identifiers.

- **`int indcount`**: Counter to track the number of unique nodes.

- **`int startnode, endnode`**: Variables to store the start and end nodes for pathfinding.

#### Functions

- **`int getindex(int node)`**: Retrieves the index of a given node in the `indices` array. If the node is not found, it adds the node to `indices` and returns its new index.
  - **Parameters**:
    - `node`: Node identifier to search for.
  - **Returns**:
    - Index of the node if found, or the index of the newly added node.

- **`int ispresentinpath(int *path, int count, int ind)`**: Checks if a node is present in the current path.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the current path.
    - `ind`: Node identifier to check.
  - **Returns**:
    - `1` if the node is present, `0` otherwise.

- **`void printpath(int *path, int count)`**: Prints the nodes in the current path.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the current path.

- **`void search(int *path, int count)`**: Performs depth-first search (DFS) to find all paths from the current node to the end node.
  - **Parameters**:
    - `path`: Array representing the current path.
    - `count`: Number of nodes in the current path.
  - **Functionality**:
    - Recursively explores all possible paths from the current node to the end node.

#### `main()` Function

- **Initialization**:
  - Reads edge data from the user until `0 0 0` is entered.
  - Updates the adjacency matrix with the edge weights.

- **Input**:
  - Reads the start and end nodes for pathfinding.

- **Processing**:
  - Initializes the path and starts the search from the start node to the end node.

- **Output**:
  - Prints all possible paths from the start node to the end node.
