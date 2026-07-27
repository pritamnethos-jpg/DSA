// LeetCode 9 - Palindrome Number
//difficulty - Easy
class Solution {
public:
    bool isPalindrome(int x) {
        int original,last;
        int rev=0;
        original=x;
        if(x<0)
        {
            return false;
        }
        else
        {
            while(x>0)
            {
                last=x%10;
                if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && last > 7))
                {
                    return false;
                }
                rev=rev*10+last;
                x=x/10;
            }
            
            if(rev==original)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};