class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum = 0;
        int dup = x;
        while(x>0){
            int lastdigit = x % 10;
            revNum = (revNum*10) + lastdigit;
            x = x / 10;
        }
        if(dup == revNum){
            return true;
        }
        else{
            return false;
        }
    }
};