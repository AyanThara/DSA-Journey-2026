#include <bits/stdc++.h>
using namespace std;
/*
LeetCode 191 - Number of 1 Bits (Hamming Weight)
Approach: Check last bit using AND (&) and right shift

Logic:
- Use (n & 1) to check if the last bit is 1
- If true, increment count
- Right shift n to process the next bit
- Stop when n becomes 0

Time Complexity: O(32)
Space Complexity: O(1)
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n > 0) {
            count += (n & 1);  // check last bit
            n >>= 1;           // right shift
        }
        return count;
    }
};
