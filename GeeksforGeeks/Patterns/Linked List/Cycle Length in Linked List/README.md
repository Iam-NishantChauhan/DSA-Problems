# 📝 Cycle Length in Linked List (GeeksforGeeks)

🔗 [Problem Link](https://www.geeksforgeeks.org/problems/find-length-of-loop/1)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Linked List

### 🚀 Performance
- **Runtime:** Successfully Evaluated
- **Memory:** N/A

---

### 📜 Problem Description

Given the head **** of a linked list. A linked list contains a cycle if its last node is connected to a previous node. If the given list contains a cycle, return the length of the cycle. Otherwise, return 0.

**Note:**  Internally, the driver code uses an integer  **x**  to represent the position (1-based indexing) of the node to which the last node is connected. If x = 0, it means last node points to null which indicating there is no loop.

**Examples:**

```
Input: 

Output: 4
Explanation: There exists a loop in the linked list 2 -> 3 -> 4 -> 5, the length of the loop is 4.

```

```
Input:

Output: 3
Explanation: There exists a loop in the linked list 19 -> 33 -> 10, the length of loop is 3.
```

```
Input:

Output: 0
Explanation: There is no loop.
```