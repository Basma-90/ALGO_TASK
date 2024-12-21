# Analysis of Kruskal's Algorithm

## Introduction
Kruskal's algorithm is a popular algorithm used to find the Minimum Spanning Tree (MST) of a connected, undirected graph. It was developed by Joseph Kruskal in 1956. The algorithm follows a greedy approach to find the MST by selecting the edges with the smallest weights and ensuring no cycles are formed.

## Steps of Kruskal's Algorithm
1. **Sort all edges**: Begin by sorting all the edges of the graph in non-decreasing order of their weights.
2. **Initialize a forest**: Create a forest where each vertex is a separate tree.
3. **Add edges**: Iterate through the sorted edges and add each edge to the MST if it does not form a cycle with the edges already included in the MST.
4. **Cycle detection**: Use the Union-Find data structure to detect cycles efficiently.

## Time Complexity
The time complexity of Kruskal's algorithm is dominated by the time required to sort the edges, which is (O(E log E)), where (E) is the number of edges. The Union-Find operations (find and union) are nearly constant time, (O(F(V))), where (F) is the inverse Ackermann function and (V) is the number of vertices. Therefore, the overall time complexity is:
 O(E log E + E F(V)) 

## Space Complexity
The space complexity of Kruskal's algorithm is (O(E + V)), where (E) is the number of edges and (V) is the number of vertices. This includes the space required to store the graph, the sorted edges, and the Union-Find data structure.


