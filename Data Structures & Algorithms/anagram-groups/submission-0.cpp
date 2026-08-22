class Solution {
public:
    bool check_anagram(string s, string t)
    {
        if(s.size() != t.size()) return false;

        int freq[26]{};
        for(int i = 0; i < s.size(); i++)
        {
            freq[static_cast<int>(s[i] - 'a')]++;
            freq[static_cast<int>(t[i] - 'a')]--;
        }

        for(auto t : freq)
        {
            if(t != 0) return false;
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // This is method 1 by sorting.

        // unordered_map<string, vector<string>> groups;

        // for(auto s : strs)
        // {

        //     string key = s;
        //     sort(key.begin(), key.end());
        //     groups[key].push_back(s);
        // }

        // vector<vector<string>> ans;
        // for(auto& [key,group] : groups)
        // {
        //     ans.push_back(group);
        // }

        // return ans;

        // Method 2 -> Without sorting

        unordered_map<string, vector<string>> groups;

        for(auto s : strs)
        {
            int freq[26]{};
            for(auto i : s)
            {
                freq[i - 'a']++;
            }

            string key;
            for(auto t : freq)
            {
                key += t;
                key += '#';
            }

            groups[key].push_back(s);
        }


        vector<vector<string>> ans;

        for(auto& [key, group] : groups)
        {
            ans.push_back(group);
        }

        return ans;
        
    }
};