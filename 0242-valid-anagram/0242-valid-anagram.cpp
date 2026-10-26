class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> frequency;

        for (char ch : s) frequency[ch]++;

        for (char ch : t) {
            auto it = frequency.find(ch);
            if (it == frequency.end()) return false;

            if (--(it->second) == 0) frequency.erase(it);
        }

        return frequency.empty();
    }
};