#include <bits/stdc++.h>
using namespace std;
/*
LeetCode 1281 - Subtract the Product and Sum of Digits of an Integer
Difficulty: Easy
Approach:
- Extract digits using n % 10
- Add digits to sum and multiply to product
- Remove last digit using n / 10
Time Complexity: O(d)
Space Complexity: O(1)
*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        return product - sum;
    }
};
