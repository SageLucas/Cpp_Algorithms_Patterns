class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> lastSeen(128, -1);
        int left = 0;
        int longest_length = 0;

        for (int right = 0; right < s.size(); ++right)
        {
            if (lastSeen[s[right]] >= left) // check if we've seen this char before AND it's inside our current window
            {
                left = lastSeen[s[right]] + 1; // move the left boundary to one spot AFTER the previous occurrence
            }
            lastSeen[s[right]] = right; // update the current character's position/location

            int current_length = right - left + 1; // +1 because array starts at index 0; 0 to 2 is length 3
            if (current_length > longest_length)
            {
            longest_length = current_length;
            }
        }
        return longest_length;
    }
};
