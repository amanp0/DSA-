class Solution {
public:
    string largestGoodInteger(string num) {
        char prev = '\0'; // no previous char yet
        int count = 0;
        char result = '\0'; // to store the max digit seen in triple

        for (char current : num) {
            if (current == prev) {
                count += 1;
            } else {
                count = 1;
            }

            if (count == 3) {
                result = max(result, current);
            }
            prev = current;
        }

        if (result == '\0') {
            return "";
        }
        return string(3, result); // repeat result 3 times
    }
};