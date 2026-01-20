#include <bits/stdc++.h>
using namespace std;

/*
LeetCode 7 - Reverse Integer
Difficulty: Easy

Approach:
- Extract last digit using x % 10
- Build reversed number
- Check overflow before updating the result

Time Complexity: O(number of digits)
Space Complexity: O(1)
*/
class Solution {
public:
    int reverse(int x) {
        long rev = 0;   
        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        if (rev > INT_MAX || rev < INT_MIN)
            return 0;

        return rev;
    }
};
