# 🚀 LeetCode & DSA Solutions

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" />
  <img src="https://img.shields.io/badge/Platform-LeetCode-orange?style=for-the-badge&logo=leetcode&logoColor=white" />
  <img src="https://img.shields.io/badge/Status-Active-success?style=for-the-badge" />
</p>

## 📖 About

This repository contains my solutions to **LeetCode** and **Data Structures & Algorithms (DSA)** problems.

The goal of this repository is to:

- 📚 Strengthen problem-solving skills
- 🧠 Master Data Structures & Algorithms
- 💻 Prepare for Software Engineering interviews
- 🚀 Maintain consistency through daily coding

---

## 🛠️ Languages Used

- C++

> More languages may be added in the future.

---

## 📂 Repository Structure

```
LeetCode-DSA/
│
├── Arrays/
├── Strings/
├── Linked List/
├── Stack/
├── Queue/
├── Trees/
├── Binary Search/
├── Recursion/
├── Dynamic Programming/
├── Graphs/
├── Greedy/
├── Backtracking/
├── Bit Manipulation/
└── README.md
```

---

## 📊 Topics Covered

- ✅ Arrays
- ✅ Strings
- ✅ Hashing
- ✅ Two Pointers
- ✅ Sliding Window
- ✅ Binary Search
- ✅ Linked List
- ✅ Stack
- ✅ Queue
- ✅ Trees
- ✅ Binary Trees
- ✅ BST
- ✅ Heap / Priority Queue
- ✅ Graphs
- ✅ DFS & BFS
- ✅ Backtracking
- ✅ Recursion
- ✅ Greedy
- ✅ Dynamic Programming
- ✅ Bit Manipulation
- ✅ Math

---

## 📌 Solution Format

Each solution includes:

- Problem Name
- LeetCode Link
- Optimized Approach
- Clean & Readable Code
- Time Complexity
- Space Complexity

Example:

```cpp
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            int need = target - nums[i];

            if(mp.count(need))
                return {mp[need], i};

            mp[nums[i]] = i;
        }

        return {};
    }
};
```

---

## 📈 Progress

| Topic | Status |
|--------|--------|
| Arrays | ✅ |
| Strings | ✅ |
| Linked List | ⏳ |
| Stack | ⏳ |
| Queue | ⏳ |
| Trees | ⏳ |
| Graphs | ⏳ |
| Dynamic Programming | ⏳ |
| Greedy | ⏳ |
| Recursion | ⏳ |
| Backtracking | ⏳ |

---

## 🎯 Goals

- Solve **500+ LeetCode Problems**
- Complete all major DSA topics
- Learn multiple approaches for every problem
- Improve coding interview skills
- Maintain daily consistency

---

## 🌟 Connect With Me

**GitHub:** https://github.com/devansh-singh7

**Portfolio:** https://devanshlabs-devs.netlify.app/

**LinkedIn:** *(Add your LinkedIn profile here)*

---

## ⭐ Support

If you find this repository helpful:

- ⭐ Star this repository
- 🍴 Fork it
- 📢 Share it with others

Happy Coding! 🚀
