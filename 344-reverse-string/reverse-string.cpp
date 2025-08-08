class Solution {
public:
    void helper(vector<char>& s, int i, int j) {
        if (i >= j) return; // base case
        swap(s[i], s[j]);
        i++;
        j--;
        helper(s, i, j); // recursive call
    }

    void reverseString(vector<char>& s) {
        helper(s, 0, s.size() - 1);
    }
};
