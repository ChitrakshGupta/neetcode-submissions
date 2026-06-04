class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded;

        for (string &str : strs) {
            encoded += "#" + to_string(str.size()) + "#" + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            i++; // skip first '#'

            int len = 0;
            while (s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }

            i++; // skip second '#'

            ans.push_back(s.substr(i, len));
            i += len;
        }

        return ans;
    }
};