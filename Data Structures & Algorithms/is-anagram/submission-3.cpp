#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        unordered_map<char, int> l;

        for (char x : s) {
            m[x]++;
        }

        for (char y : t) {
            l[y]++;
        }

        for (char x : s) {
            if (m.count(x) == l.count(x)) {
                if (m[x] != l[x]) {
                    return false;
                }
            }
            else { 
                return false; 
            }
        }
        for (char x : t) {
            if (m.count(x) == l.count(x)) {
                if (m[x] != l[x]) {
                    return false;
                }
            }
            else { 
                return false; 
            }
        }
        return true;
    }
};
