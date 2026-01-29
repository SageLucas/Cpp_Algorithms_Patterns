class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int > numsMap; // hash map <Key: number, Value: index>
        numsMap.reserve(nums.size()); // Pre-allocate memory to avoid resizing pauses

        int index1 = 0, index2 = 0;

        // iterating through nums array to create the hash map
        for (int i = 0; i < nums.size(); i++)
        {
            // while creating the map, check if we have found the solution
            auto iterator = numsMap.find(target - nums[i]);
            if (iterator != numsMap.end())
            {
                index1 = iterator->second;
                index2 = i;
                return {index1, index2};
            }
            // if solution not found, add the value + index pair to the map
            numsMap[nums[i]] = i;
        }
        return {};
    }
};
