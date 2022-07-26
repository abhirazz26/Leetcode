class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        long int y=x;
        while(x>0){
            int lastdigit=x%10;
            rev=rev*10+lastdigit;
            x/=10;
        }
        if(rev==y){
            return true;
        }

            return false;
        }
};