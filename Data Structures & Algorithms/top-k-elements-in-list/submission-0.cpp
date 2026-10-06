class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> freq;
        for (int x : nums)
        {
            freq[x]++;
        }

        vector<pair<int,int>> arr;

        for(auto& [num, count] : freq)
        {
            arr.push_back({num, count});
        }

        sort(arr.begin(), arr.end(), [](pair<int,int>& a, pair<int, int>&b){
            return a.second > b.second;
        });

        vector<int> answer;

        for(int i = 0; i < k; i++)
        {
            answer.push_back(arr[i].first);
        }

        return answer;
    }
};
