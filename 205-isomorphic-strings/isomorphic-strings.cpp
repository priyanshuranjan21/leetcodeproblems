class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> map_s_to_t;
        unordered_map<char, char> map_t_to_s;

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // Check if the mapping exists and is consistent
            if (map_s_to_t.find(c1) != map_s_to_t.end() && map_s_to_t[c1] != c2) return false;

           if (map_t_to_s.find(c2) != map_t_to_s.end() && map_t_to_s[c2] != c1) return false;


            // Establish bidirectional mapping
            map_s_to_t[c1] = c2;
            map_t_to_s[c2] = c1;
        }

        return true;
    }
};