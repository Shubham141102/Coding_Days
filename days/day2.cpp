// 1. 66. Plus One



// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.
// Example 1:

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].
// Example 2:

// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Incrementing by one gives 4321 + 1 = 4322.
// Thus, the result should be [4,3,2,2].

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            // If the current digit is not 9, simply add 1 to it and return the array
            if (digits[i] != 9) {
                digits[i] += 1;
                return digits;
            }
            // If the current digit is 9, set it to 0 and continue
            digits[i] = 0;
        }
        // If all digits were 9, we create a new array with an additional leading 1
        vector<int> newDigits(digits.size()+1);
        newDigits[0] = 1;  // Set the first digit to 1, rest are already 0 by default
        return newDigits;
    }
};
