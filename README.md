<div align="center">

# ⚡​ LEETSOLVE - Dynamic programming ⚡​

```console

.__                 __               .__               
|  |   ____   _____/  |_  __________ |  |___  __ ____  
|  | _/ __ \_/ __ \   __\/  ___/  _ \|  |\  \/ // __ \ 
|  |_\  ___/\  ___/|  |  \___ (  <_> )  |_\   /\  ___/ 
|____/\___  >\___  >__| /____  >____/|____/\_/  \___  >
          \/     \/          \/                     \/ 

```
</div>

## ​📌​ solve some coding problems 👨🏾‍💻​

### 🔷 Longest Common Subsequence (LCS)
The longest common subsequence is defined as the longest subsequence that is common to all the given sequences, provided that the elements of the subsequence are not required to occupy consecutive positions within the original sequences.
```c++
string s1 = "BCDAACD";
string s2 = "ACDBAC";

// Longest common subsequence: 'CDAC'
```
#### Real-world application 💡
LCS is used in a variety of contexts, such as:
- Bioinformatics: Comparing DNA sequences to identify similarities between different species or within a species.
- Text comparison: Comparing and contrasting different editions of a manuscript or different drafts of a document, allowing editors and authors to track changes and revisions.
- Version control systems: Tools like Git use LCS algorithms to identify and merge changes made in different branches of a codebase.
<hr/>

### 🔷 Bell numbers (BN)
The Bell Number problem is a combinatorial problem that involves calculating the Bell numbers, denoted as B(n). The Bell numbers count the number of distinct partitions of a set of n elements into non-empty subsets.
```c++
int setSize = 3;

// Number of possible subsets: 5
```
#### Real-world application 💡
Bell numbers have applications in various real-world scenarios, particularly in combinatorial and counting problems:
- Bell numbers are often used to solve combinatorial problems, such as counting the number of ways to arrange objects, distribute items into categories, or partition a set into subsets. These problems can arise in scheduling, resource allocation, and other logistical scenarios.
- The Bell numbers can help determine the number of possible ways to connect devices or components in the network. This information is valuable for optimizing network performance and reliability.
- In certain cryptographic algorithms, the Bell numbers can be used to calculate the number of possible keys or key combinations. This is important for understanding the security of a cryptographic system and the potential vulnerability to attacks.
<hr/>

### 🔷 Coin change 1 (CC)
The Coin Change I problem, often referred to as "Coin Change (Count the Ways)," you are given a set of coin denominations and a target amount of money. The goal is to find the total number of distinct ways to make up the target amount using the given coin denominations. You can use each coin an unlimited number of times.
```c++
int amount = 50;
int coins[] = {1, 2, 3, 4, 5};

// The fewest number of coins required to make up that amount: 10.
```
#### Real-world application 💡
- Cash Register and Retail: When making change in a cash register at a retail store, clerks and automated systems need to determine the various ways they can give change to customers. 
- Vending Machines: Vending machines that accept various coin denominations need to calculate the number of ways to give change when customers insert money. The machine needs to find the optimal coin combinations to provide change for different purchase amounts.
<hr/>

### 🔷 Coin change 2 (CC2)
In this problem, you are given a set of coin denominations and a target amount of money. The goal is to find the number of combinations that make up that amount.
```c++
int amount = 5;
int coins[] = {1, 2, 3};

// The number of combinations that make up the amount: 5
```
#### Real-world application 💡
- ATMs: ATMs, when dispensing cash, aim to minimize the number of bills and coins provided to the customer. The Coin Change II problem is used to find the most efficient way to dispense the requested amount.
- Currency Exchange: In foreign currency exchange, the problem can be applied to determine the minimum number of coins and banknotes needed to provide a specific amount in the local currency.
<hr/>

### 🔷 Min cost path (MCP)
Given a 2D matrix where each cell has a cost to travel. You have to write an algorithm to find a path from the left-top corner to the bottom-right corner with minimum travel cost. You can move only right or down.
```c++
int cost[][] = {
  {1, 2, 3},
  {4, 8, 2},
  {1, 5, 3}
};

// Minimum travel cost path: 11
```
#### Real-world application 💡
- Shortest Path in Navigation: In GPS navigation systems, finding the path with the minimum travel time or cost between two locations.
- Robotics: In robotics, robots use this problem to navigate through environments with obstacles, choosing paths with the lowest energy consumption or time.
- Network Routing: In network routing, finding the path with the minimum latency or cost to transmit data between two points in a network.
<hr/>

### 🔷 Nth fibonacci number (FN)
In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation: ```F_{n} = F_{n-1} + F_{n-2}``` with seed values and ```F_0 = 0``` and ```F_1 = 1```.
```c++
int number = 9;

// Nth Fibonacci number: 34
```
#### Real-world application 💡
- Nature's Design: The Fibonacci sequence is often seen in the arrangement of leaves on a stem, the spiral of a pinecone, the curve of a nautilus shell, or the pattern of seeds in a sunflower head. These examples follow Fibonacci ratios, known as the "golden ratio," which often leads to efficient packing and growth patterns.
- Computer Science: Fibonacci numbers are used in algorithms for tasks like generating pseudo-random numbers, optimizing data structures, and in various dynamic programming problems due to their recursive nature.
- Finance and Trading: Financial markets sometimes exhibit patterns related to Fibonacci numbers. Traders use Fibonacci retracement levels to identify potential levels of support and resistance for asset prices, helping in making investment decisions.
<hr/>

### 🔷 Subset sum (SS)

### 🔷 Edit distance (ED)

### 🔷 Dice throw (DT)

### 🔷 Shortest common supersequence (SCS)

