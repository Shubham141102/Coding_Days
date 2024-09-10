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