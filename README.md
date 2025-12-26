# ADA-Algorithm-Simulator

A C++ based simulator implementing core **Design and Analysis of Algorithms**
concepts with **step-by-step execution**.

---

##  Overview
ADA Algorithm Simulator is a C++ console-based project that demonstrates
important ADA concepts using clear recursion tracing and intermediate steps.
The goal is to make algorithms easier to understand by visualizing their
internal working.

---

##  Currently Implemented
- **Merge Sort**
  - Clear Left / Right array division
  - Recursive breakdown
  - Step-by-step merging process

- **Quick Sort**
  - Pivot-based partitioning (first element as pivot)
  - Recursive division
  - Step-by-step visualization

  - **Huffman Coding (Greedy)**
  - Min-heap based construction
  - Greedy selection of lowest frequencies
  - Prefix-free binary codes

- **0/1 Knapsack (Dynamic Programming)**
  - DP table construction
  - Choice-based state transition
  - Visual representation of optimal values

---

##  How to Run

### Requirements
- Windows
- MSYS2 (UCRT64)
- g++

### Steps
```bash

cd /d/projects/ADA-Algorithm-Simulator
g++ src/*.cpp -o ada.exe
./ada.exe

---

##  Sample Output

```text
===== ADA Algorithm Simulator =====
1. Sorting Algorithms
2. Greedy Algorithms
3. Dynamic Programming
4. Graph Algorithms
0. Exit

Enter your choice: 1

Enter number of elements: 4
Enter elements: 44 21 75 66

--- Merge Sort Steps ---

Dividing:
Left  = 44 21
Right = 75 66

  Dividing:
  Left  = 44
  Right = 21
  Merging = 21 44

  Dividing:
  Left  = 75
  Right = 66
  Merging = 66 75

Merging = 21 44 66 75

Sorted Array: 21 44 66 75
