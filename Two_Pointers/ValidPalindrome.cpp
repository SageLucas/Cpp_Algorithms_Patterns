class Solution {
public:
    bool isPalindrome(string s)
    {
        if (s.empty()) { return true; } // check if string is empty

        int left = 0; // setting "left" index as the start of string
        // setting "right" index as the end of the string - 1, if size = 5, string indexes are 0-4
        int right = s.size() - 1;

        while (left < right)
        {
            // while the char at index left/right is not alphanumeric, increment/decrement
            while (left < right && !(isalnum(s[left]))) { ++left; }
            while (left < right && !(isalnum(s[right]))) { --right; }

            if (tolower(s[left]) != tolower(s[right])) { return false; } // if any char doesn't match, not palindrome
            ++left;
            --right;
        }
        return true; // if the while loop continues until left > right, then string is palindrome
    }
};
