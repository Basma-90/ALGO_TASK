# Prim's Algorithm Analysis

## Introduction
Prim's algorithm is a greedy algorithm that finds a minimum spanning tree (MST) for a weighted undirected graph. This means it finds a subset of the edges that forms a tree including every vertex, where the total weight of all the edges in the tree is minimized.

## Algorithm Explanation
The algorithm operates as follows:
1. Initialize a priority queue to store the edges, with the smallest edge at the top.
2. Start with an arbitrary vertex and add it to the MST.
3. While there are vertices not yet included in the MST:
    - Extract the minimum weight edge from the priority queue.
    - If the extracted edge connects to a vertex not yet in the MST, add it to the MST.
    - Update the priority queue with the edges connected to the newly added vertex.

## Complexity Analysis
- **Time Complexity**: The time complexity of Prim's algorithm is O(E log V), where E is the number of edges and V is the number of vertices. This is due to the use of a priority queue to extract the minimum weight edge.
- **Space Complexity**: The space complexity is O(V + E) to store the graph, the priority queue, and other auxiliary data structures.


