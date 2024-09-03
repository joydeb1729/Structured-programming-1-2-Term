## Path Finding in a Graph

### Overview

This program constructs a graph using adjacency lists and finds all possible paths from a source node to a destination node. The graph is represented using an array of nodes, where each node contains a list of links to other nodes along with associated costs.

### Code Explanation

#### Data Structure

- **`struct node`**: Defines a node in the graph.
  - `int nodeId`: Identifier for the node.
  - `int cost`: Cost associated with the link (not used in this example but present for completeness).
  - `struct node *link`: Pointer to the next node in the adjacency list (link list).

- **Global Variables**:
  - `struct node nodes[100]`: Array to store nodes of the graph.
  - `int nodeCount`: Keeps track of the number of nodes in the graph.
  - `int source`: Source node for path finding (set to 1).
  - `int destination`: Destination node for path finding (set to 7).

#### Functions

- **`void addNode(int nodeId)`**: Adds a node to the graph.
  - **Parameters**:
    - `nodeId`: Identifier of the node to add.
  - **Functionality**:
    - Checks if the node already exists. If not, adds the node to the `nodes` array and increments `nodeCount`.

- **`void addLink(int nodeId, int linkId, int linkCost)`**: Adds a link between two nodes.
  - **Parameters**:
    - `nodeId`: Identifier of the node from which the link is added.
    - `linkId`: Identifier of the target node.
    - `linkCost`: Cost associated with the link.
  - **Functionality**:
    - Finds the node in the `nodes` array and appends the new link to its adjacency list.

- **`void search(int *path, int count)`**: Recursively searches for all paths from the source to the destination node.
  - **Parameters**:
    - `path`: Array storing the current path.
    - `count`: Number of nodes currently in the path.
  - **Functionality**:
    - Prints the path if it reaches the destination.
    - Recursively explores all possible links from the current node.

- **`int isPresent(int *path, int count, int nodeId)`**: Checks if a node is already present in the current path.
  - **Parameters**:
    - `path`: Array storing the current path.
    - `count`: Number of nodes currently in the path.
    - `nodeId`: Identifier of the node to check.
  - **Returns**:
    - `1` if the node is present in the path.
    - `0` otherwise.

#### `main()` Function

- **Initialization**:
  - Reads input to construct the graph until the end condition `0 0 0` is met.
  - For each input triplet `(a, b, c)`, adds nodes and links to the graph.

- **Processing**:
  - Initializes the `path` array with the source node.
  - Calls `search` to find and print all possible paths from the source to the destination node.

  - **Input**:
    - Triplets of integers representing nodes and links until `0 0 0` is entered.

  - **Output**:
    - All possible paths from the source to the destination node.
