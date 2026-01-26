class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1; //check is n equal to 0 
        int m = n; //make a variable m and put the n value 
        int mask = 0; //create mask and start wiith 0

        while(m != 0) {  //run the loop till m become 0
            mask = (mask << 1) | 1;  //left shift mask
            m = m >> 1;      //right shift m 
        }
        return (~n) & mask;  //return ~n and mask
    }
};
## LeetCode 1009 – Complement of Base 10 Integer

### Problem
Given an integer n, return its bitwise complement.

### Approach
- Create a mask with all 1s equal to the number of bits in n
- Apply bitwise NOT on n
- Use AND with mask to ignore extra flipped bits

### Concepts Used
- Bit manipulation
- Left shift and bitwise OR
- Bitwise NOT and AND

### Time Complexity
O(log n)

### Space Complexity
O(1)
