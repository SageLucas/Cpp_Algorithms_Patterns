class Solution {
public:
    bool isAnagram(string s, string t)
    {
        /* if string sizes differ they cannot be an anagram */
        if (s.size() != t.size()) { return false; }

        unordered_map<char, int> count_map;

        for (int i = 0; i < s.size(); ++i)
        {
            /* if char exists in string s, then +1 to the count in the hash map of letters
            'a' is 97 in ASCII table */
            ++count_map[s[i]];

            /* if char exists in string s, then -1 to the count in the array of letters
            'a' is 97 in ASCII table */
            --count_map[t[i]];
        }

        /* for each char in string s we added +1, and -1 for each same char in string t
        if all values in hash map count_map == 0 it means the strings are valid anagram*/
        for (auto const& [character, count] : count_map)
        {
            if (count != 0)
            {
                return false;
            }
        }
        return true;
    }
};
