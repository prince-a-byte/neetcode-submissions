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
            if(ls.contains(nums[i]))
            {
                return true;
            }

            ls.insert(nums[i]);
        }

        return false;

        // Best solution
        
    }
};