class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];

            // Push if opening bracket
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            // Handle closing bracket
            else {
                if(st.empty()) return false; // no opening for closing

                if((c == ')' && st.top() == '(') ||
                   (c == '}' && st.top() == '{') ||
                   (c == ']' && st.top() == '[')) {
                    st.pop(); // valid match
                } else {
                    return false; // mismatch
                }
            }
        }

        return st.empty(); // must be empty 
    }
};