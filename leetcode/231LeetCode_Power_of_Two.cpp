class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;

        for(int i = 0; i <= 30; i++) {
            if(pow(2, i) == n) {
                return true;
            }
        }
        return false;
    }
};
## LeetCode 231 – Power of Two

### Problem
Given an integer n, determine whether it is a power of two.

### Approach
- Iterate through powers of two using `pow(2, i)`
- Compare each value with n
- If any power matches n, return true

### Concepts Used
- Math (`pow()` function)
- Looping
- Conditional checks

### Time Complexity
O(log n)

### Space Complexity
O(1)
