//gfg: Armstrong Numbers
//difficulty - Easy
class Solution {
  public:
    bool armstrongNumber(int n) {
        int last,cube,original;
        int total=0;
        original=n;
        if(n<100){
            return false;
        }
        else if(n>=100 && n<1000)
        {
            while(n>0)
            {
                last=n%10;
                cube=last*last*last;
                total=total+cube;
                n=n/10;
            }
            if(original==total)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else {
            return false;
        }
        
    }
};