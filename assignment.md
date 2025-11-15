# Assignment - Day 6: 2-D Dynamic Programming Problems

## 1. Unique Paths II (LeetCode 63)

**Link:** [https://leetcode.com/problems/unique-paths-ii/](https://leetcode.com/problems/unique-paths-ii/)

**Objective:** Find the total number of unique paths from the top-left corner to the bottom-right corner of a grid with obstacles.

**Hint:**

* Define a recursive function `f(i, j)` that returns the number of ways to reach cell `(i, j)`.
* Recursive Step: `f(i, j) = f(i-1, j) + f(i, j-1)`
* Store results in a `dp[i][j]` cache before returning.

---

## 2. Dungeon Game (LeetCode 174)

**Link:** [https://leetcode.com/problems/dungeon-game/](https://leetcode.com/problems/dungeon-game/)

**Objective:** Find the knight’s minimum initial health needed to rescue the princess starting from `(0, 0)`.

**Hint:**

* Define a recursive function `f(i, j)` that returns the minimum health required from cell `(i, j)` to reach the destination.

---

## 3. Minimum Distance to Type a Word Using Two Fingers (LeetCode 1320)

**Link:** [https://leetcode.com/problems/minimum-distance-to-type-a-word-using-two-fingers/](https://leetcode.com/problems/minimum-distance-to-type-a-word-using-two-fingers/)

**Objective:** Find the minimum total distance needed to type a word using two fingers.

**Hint:**

* Define a recursive function `f(index, left, right)` → minimum distance to type substring starting from index given left and right finger positions.

---

## 4. Minimum Falling Path Sum II (LeetCode 1289)

**Link:** [https://leetcode.com/problems/minimum-falling-path-sum-ii/](https://leetcode.com/problems/minimum-falling-path-sum-ii/)

**Objective:** Find the minimum sum of a falling path through a grid such that no two consecutive elements come from the same column.

**Hint (Memoization Approach):**

* Define `f(i, j)` = minimum path sum from cell `(i, j)` to the bottom.
* Base Case: If `i` is the last row → return `grid[i][j]`.
* Recursive Step: `f(i, j) = grid[i][j] + min(f(i+1, k))` for all `k != j`.
* Store results in `dp[i][j]`.

---

## 5. Optimal Division (LeetCode 553)

**Link:** [https://leetcode.com/problems/optimal-division/](https://leetcode.com/problems/optimal-division/)

**Objective:** Find an expression that yields the maximum result by placing parentheses optimally.

---

# Assignment - Day 7: 0/1 Knapsack Variations & Tabulation Practice

## Part A: 0/1 Knapsack Variations (Recursive, Memoization & Tabulation)

### 1. Perfect Sum Problem (GFG)

**Link:** [https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1)

**Objective:** Count the number of subsets with sum equal to a target.

**Requirements:**

* Recursive Solution
* Memoization Solution
* Tabulation Solution

---

### 2. Target Sum (LeetCode 494)

**Link:** [https://leetcode.com/problems/target-sum/description/](https://leetcode.com/problems/target-sum/description/)

**Objective:** Count the number of ways to assign `+` or `-` to reach the target sum.

**Requirements:**

* Recursive Solution
* Memoization Solution
* Tabulation Solution

---

## Part B: Tabulation Only

### 3. Frog Jump (Coding Ninjas)

**Link:** [https://www.naukri.com/code360/problems/frog-jump_3621012](https://www.naukri.com/code360/problems/frog-jump_3621012)

### 4. House Robber (LeetCode 198)

**Link:** [https://leetcode.com/problems/house-robber/](https://leetcode.com/problems/house-robber/)

### 5. House Robber II (LeetCode 213)

**Link:** [https://leetcode.com/problems/house-robber-ii/](https://leetcode.com/problems/house-robber-ii/)

### 6. Boredom (Codeforces 455A)

**Link:** [https://codeforces.com/problemset/problem/455/A](https://codeforces.com/problemset/problem/455/A)

### 7. Unique Paths (LeetCode 62)

**Link:** [https://leetcode.com/problems/unique-paths/](https://leetcode.com/problems/unique-paths/)

### 8. Minimum Path Sum (LeetCode 64)

**Link:** [https://leetcode.com/problems/minimum-path-sum/](https://leetcode.com/problems/minimum-path-sum/)

# Assignment - Day 8: LCS Variations

## 1. Longest Common Substring (GFG)

**Link:** [https://www.geeksforgeeks.org/problems/longest-common-substring1452/1](https://www.geeksforgeeks.org/problems/longest-common-substring1452/1)

**Objective:** Find the length of the longest common substring between two strings.

**Hint:** Use a 2D DP table where `dp[i][j]` holds the length of the current common substring ending at `(i, j)`.

---

## 2. Shortest Common Supersequence (LeetCode 1092)

**Link:** [https://leetcode.com/problems/shortest-common-supersequence/](https://leetcode.com/problems/shortest-common-supersequence/)

**Objective:** Return the shortest string that has both strings as subsequences.

**Hint:** Length = `len(s1) + len(s2) - LCS(s1, s2)`. Construct using backtracking on the LCS table.

---

## 3. Distinct Subsequences (LeetCode 115)

**Link:** [https://leetcode.com/problems/distinct-subsequences/](https://leetcode.com/problems/distinct-subsequences/)

**Objective:** Count the number of distinct subsequences of `s` equal to `t`.

**Hint:** If chars match → `dp[i][j] = dp[i-1][j-1] + dp[i-1][j]`; else → `dp[i][j] = dp[i-1][j]`.

---

## 4. Minimum Insertions to Make Palindrome (LeetCode 1312)

**Link:** [https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/)

**Objective:** Find minimum number of insertions to make a string a palindrome.

**Hint:** Answer = `len(s) - LPS(s)`. LPS = `LCS(s, reverse(s))`.

---

## 5. Delete Operation for Two Strings (LeetCode 583)

**Link:** [https://leetcode.com/problems/delete-operation-for-two-strings/](https://leetcode.com/problems/delete-operation-for-two-strings/)

**Objective:** Return minimum deletions needed to make two strings equal.

**Hint:** Let LCS = `LCS(s1, s2)`. Answer = `(len(s1) - LCS) + (len(s2) - LCS)`.

---

## 6. Longest Repeating Subsequence (GFG)

**Link:** [https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1](https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1)

**Objective:** Find the longest subsequence that appears at least twice.

**Hint:** Same as `LCS(s, s)` but ensure `i != j`.

---

## 7. Wildcard Matching (LeetCode 44)

**Link:** [https://leetcode.com/problems/wildcard-matching/description/](https://leetcode.com/problems/wildcard-matching/description/)

**Objective:** Match a pattern containing `?` and `*` with a string.

**Hint:** `dp[i][j]` determines match status. `?` → one char, `*` → zero or more chars.

---

## What to Submit

* Memoization solution (where applicable)
* Tabulation DP solution
* For SCS, also provide the constructed sequence
* For Wildcard Matching, tabulation is mandatory

**Deadline:** 16 November, 11:59 PM

**Best regards,**
Training Team

# Assignment - Day 5: 1-D Dynamic Programming Problems

## 1. Calculate nCr (GeeksforGeeks)

**Link:** [https://www.geeksforgeeks.org/problems/ncr1019/1](https://www.geeksforgeeks.org/problems/ncr1019/1)

**Objective:** Calculate the value of nCr using modular arithmetic *(mod 10⁹ + 7).*

**Hint:**

* Use recursive relation: `nCr = n-1Cr-1 + n-1Cr`
* Implement with DP or memoization to avoid recomputation.
* Handle edge cases when `r > n`.

---

## 2. Tribonacci Number (LeetCode 1137)

**Link:** [https://leetcode.com/problems/n-th-tribonacci-number/](https://leetcode.com/problems/n-th-tribonacci-number/)

**Objective:** Find the N-th Tribonacci number where:
`T(n) = T(n-1) + T(n-2) + T(n-3)`.

**Hint:**

* Solve recursively first, then optimize using memoization.
* Observe similarity with Fibonacci.

---

## 3. Min Cost Climbing Stairs (LeetCode 746)

**Link:** [https://leetcode.com/problems/min-cost-climbing-stairs/](https://leetcode.com/problems/min-cost-climbing-stairs/)

**Objective:** Return the minimum cost to reach the top.

**Hint:**

* Define `dp[i]` = min cost to reach step `i`.
* Recurrence: `dp[i] = cost[i] + min(dp[i-1], dp[i-2])`.

---

## 4. Boredom (Codeforces 455A)

**Link:** [https://codeforces.com/problemset/problem/455/A](https://codeforces.com/problemset/problem/455/A)

**Objective:** Maximize the sum of chosen numbers such that no two differ by 1.

**Hint:**

* Use frequency map.
* Recurrence similar to House Robber: `dp[i] = max(dp[i-1], dp[i-2] + i * freq[i])`.

---

# Assignment - Day 4: Advanced Backtracking

## 1. Word Break (LeetCode 139)

**Link:** [https://leetcode.com/problems/word-break/](https://leetcode.com/problems/word-break/)

## 2. Word Break II (LeetCode 140)

**Link:** [https://leetcode.com/problems/word-break-ii/](https://leetcode.com/problems/word-break-ii/)

## 3. N-Queens II (LeetCode 52)

**Link:** [https://leetcode.com/problems/n-queens-ii/](https://leetcode.com/problems/n-queens-ii/)

## 4. Sudoku Solver (LeetCode 37)

**Link:** [https://leetcode.com/problems/sudoku-solver/](https://leetcode.com/problems/sudoku-solver/)

## 5. Merge Sort (Backtracking Understanding)

**Objective:** Implement Merge Sort using recursion.

## 6. Quick Sort (Backtracking Understanding)

**Objective:** Implement Quick Sort recursively.

---

# Assignment - Day 3: Backtracking

## 1. Move Brackets (Codeforces 1374C)

**Link:** [https://codeforces.com/problemset/problem/1374/C](https://codeforces.com/problemset/problem/1374/C)

## 2. Palindrome Partitioning (LeetCode 131)

**Link:** [https://leetcode.com/problems/palindrome-partitioning/](https://leetcode.com/problems/palindrome-partitioning/)

## 3. N-Queens II (LeetCode 52)

**Link:** [https://leetcode.com/problems/n-queens-ii/](https://leetcode.com/problems/n-queens-ii/)

## 4. Permutations II (LeetCode 47)

**Link:** [https://leetcode.com/problems/permutations-ii/description/](https://leetcode.com/problems/permutations-ii/description/)

---

# Assignment - Day 2: Basics to Backtracking

## 1. Print N-bit Binary Numbers Having More 1s Than 0s

**Link:** [https://www.geeksforgeeks.org/print-n-bit-binary-numbers-having-more1s-than-0s/](https://www.geeksforgeeks.org/print-n-bit-binary-numbers-having-more1s-than-0s/)

## 2. Delete Middle Element of a Stack

**Link:** [https://www.geeksforgeeks.org/delete-middle-element-of-a-stack/](https://www.geeksforgeeks.org/delete-middle-element-of-a-stack/)

## 3. Letter Combinations of a Phone Number (LeetCode 17)

**Link:** [https://leetcode.com/problems/letter-combinations-of-a-phone-number/](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

## 4. Combinations (LeetCode 77)

**Link:** [https://leetcode.com/problems/combinations/](https://leetcode.com/problems/combinations/)

## 5. Letter Tile Possibilities (LeetCode 1079)

**Link:** [https://leetcode.com/problems/letter-tile-possibilities/](https://leetcode.com/problems/letter-tile-possibilities/)
