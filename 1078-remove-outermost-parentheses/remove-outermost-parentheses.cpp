class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;
        int start = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') count++;
            else count--;

            // When we complete one primitive
            if (count == 0) {
                // Remove the outermost parentheses
                result += s.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }
        return result;
    }
};
