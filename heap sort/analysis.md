# Heapsort Algorithm

## Part (a): Required Algorithms

### 1. Build Max Heap
- **Objective**: Convert an unsorted array into a max heap.
- **Steps**:
    1. Start from the last non-leaf node and move upwards to the root node.
    2. For each node, ensure the subtree rooted at that node satisfies the max heap property.
    3. If the subtree does not satisfy the max heap property, swap the node with the largest child and continue heapifying the affected subtree

### 2. Heapify
- **Objective**: Ensure the subtree rooted at a given node satisfies the max heap property.
- **Steps**:
    1. Compare the node with its left and right children.
    2. If the node is smaller than either child, swap it with the larger child.
    3. Recursively heapify the affected subtree.

### 3. Heapsort
- **Objective**: Sort an array using the heap data structure.
- **Steps**:
    1. Build a max heap from the unsorted array.
    2. Swap the root of the max heap with the last element of the heap.
    3. Reduce the size of the heap by one and heapify the root.
    4. Repeat steps 2 and 3 until the heap size is reduced to one.

## Part (b): Analysis of Algorithms

### Build Max Heap
- **Time Complexity**: O(n)
    - Building a max heap involves heapifying each node starting from the last non-leaf node to the root. The time complexity of heapifying a single node is O(log n), but since we are not heapifying all nodes at the same level, the overall time complexity is O(n).

### Heapify
- **Time Complexity**: O(log n)
    - Heapifying a node involves comparing it with its children and potentially swapping it with the larger child. This process continues down the height of the tree, which is log n levels deep.

### Heapsort
- **Time Complexity**: O(n log n)
    - The heapsort algorithm involves building a max heap (O(n)) and then performing n-1 heapify operations (each O(log n)). Therefore, the overall time complexity is O(n log n).
- **Space Complexity**: O(1)
    - Heapsort is an in-place sorting algorithm, meaning it requires only a constant amount of additional space.

### Overall Analysis
- Heapsort is a comparison-based sorting algorithm with a time complexity of O(n log n) in the worst case. It is not a stable sort, meaning the relative order of equal elements may not be preserved. However, it is an in-place sort, making it space-efficient.