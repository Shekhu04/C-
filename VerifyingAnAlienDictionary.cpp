
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int mapping[26];
        int seq = 0;
        for (char ch : order) {
            mapping[ch - 'a'] = seq++;
        }
        for (int i = 0; i < words.size() - 1; i++) {
            string curr = words[i];
            string next = words[i + 1];
            int len = min(curr.length(), next.length());
            if (len != curr.length() && len == next.length() && curr.substr(0, len) == next) {
                return false;
            }
            for (int l = 0; l < len; l++) {
                if (mapping[curr[l] - 'a'] > mapping[next[l] - 'a']) {
                    return false;
                }
                if (mapping[curr[l] - 'a'] < mapping[next[l] - 'a']) {
                    break;
                }
            }
        }
        return true;
    }
};
