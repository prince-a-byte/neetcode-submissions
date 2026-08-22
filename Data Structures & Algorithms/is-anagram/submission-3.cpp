class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1st Approach
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
};
