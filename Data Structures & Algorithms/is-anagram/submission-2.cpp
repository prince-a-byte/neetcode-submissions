class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1st Approach
        if(s.size() != t.size()) return false;
        int hash_map_s[26]{};
        int hash_map_t[26]{};
        for(int i = 0; i < s.size(); i++)
        {
            hash_map_s[static_cast<int>(s[i] - 'a')]++;
            hash_map_t[static_cast<int>(t[i] - 'a')]++;
        }

        for(int i = 0; i < 26; i++)
        {
            if(hash_map_s[i] != hash_map_t[i]) return false; 
        }

        return true;

    }
};
