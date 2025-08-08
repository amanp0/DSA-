class Solution {
public:
    bool helper(const string& s, int i, int j) {
       while (i < j && !isalnum(s[i])) i++; // skip non-alphanumeric
        while (i < j && !isalnum(s[j])) j--; // skip non-alphanumeric
        
        if (i >= j) return true; // reached middle
        
        if (tolower(s[i]) != tolower(s[j])) return false;
        
        return helper(s, i + 1, j - 1); // recurse inward
    }

    bool isPalindrome(string s) {
        return helper(s, 0, s.size() - 1);
    }
};
