class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // brute force
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     for(int j = i + 1; j < nums.size(); j++)
        //     {
        //         if(nums[i] == nums[j])
        //         {
        //             return true;
        //         }
        //     }
        // }

        // return false;


        // optimal solutions
        unordered_set<int> ls;
        for(int i = 0; i < nums.size(); i++)
        {
            if(!ls.insert(nums[i]).second)
            {
                return true;
            }
        }

        return false;

        // Best solution

    }
};