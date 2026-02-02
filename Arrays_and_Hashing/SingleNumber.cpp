class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = 0;
        
        for (int i : nums)
        {
            /* XOR (^) cancels out pairs of elements, so only the single number remains */ 
            number ^= i;
        }
        return number;
    }
};
