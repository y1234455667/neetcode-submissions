#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
       
        unordered_map<char, int> m;

        for (char x : s) {
            m[x]++;
        }

        for (char y : t) {
            m[y]--;
        }

        for (auto& k : m) {
            if (k.second != 0) {
                return false;
            }
        }
       
        return true;
    }
};
