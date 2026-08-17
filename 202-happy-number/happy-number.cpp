class Solution {
public:
      int ssum(int n){
        int sum=0,dig=0;
        while(n>0){
            dig=n%10;
            sum+=dig*dig;
            n=n/10;
        }
          return sum;
      }
    bool isHappy(int n) {
      int slow=ssum(n);
      int fast=ssum(ssum(n));
      while(fast!=slow)
      {
        slow=ssum(slow);
        fast=ssum(ssum(fast));
      }
        return slow==1;
    }
};