class Solution {
public:
    int reverse(int x) {
        int min=INT_MIN;
        int max=INT_MAX;
        
        int result=0;
        
        while(x)
        {
           int digit=x%10;
            x=x/10;
            
            if(result> max/10 || result==max && digit>=max%10)
                return 0;
            if(result<min/10 || result==min && digit<=min%10)
                return 0;
            
            result=result*10+digit;
        }
        return result;
    }
};
