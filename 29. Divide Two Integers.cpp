class Solution {
public:
    int divide(int dividend, int divisor) {
      int long ans = 0;

if(dividend==INT_MIN && divisor==-1) return INT_MAX;
ans = dividend/divisor;

if(ans>INT_MAX) return INT_MAX;
else if(ans<INT_MIN) return INT_MIN;
else return ans;
        
    }
};
