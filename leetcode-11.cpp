class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        /*4 = 100 (base 2), so 4 is not strictly palindromic number

for n > 4, consider the base n - 2.

In base n - 1, n = 11.

In base n - 2, n = 12, so n is not strictly palindromic number.

There is no strictly palindromic number n where n >= 4

*/
        return false;
    }
};