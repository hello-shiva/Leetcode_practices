class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){return false;}
        int check = x;
        long long checks =0;
        while(check !=0){
            int digit = check %10;
            checks=checks *  10 +digit;
            check=check/10;
        }
        return(x== checks);
    }
};