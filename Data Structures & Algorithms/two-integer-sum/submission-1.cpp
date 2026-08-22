class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Not the optimal Approach for this... O(n^2);
        // vector<int> ans(2);
        // for(int i{}; i < nums.size(); i++)
        // {
        //     for(int j = i+1; j < nums.size(); j++)
        //     {
        //         if(nums[i]+nums[j] == target)
        //         {
        //             ans = {i,j};
        //         }
        //     }
        // }

        // return ans;


        // Better Approach
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++)
        {
            int compliment = target - nums[i];

            if(hash.contains(compliment))
            {
                return {hash[compliment], i};
            }

            hash[nums[i]] = i;
        }

        return {0,0};

    }
};
