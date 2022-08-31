
//first sol
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
    }
};
//second sol
class Solution {
public:
    bool isPowerOfTwo(int n){
        if(n==0){
            return false;
        }else if (n==1){
            return true;
        }else{
            
            while(n%2==0){
                n/=2;
            }
             if(n==1){
                 return 1;
             }else{
                 return 0;
             }
            
        }
        
        
    }
    
    
    
    
    
};

//third solution
class Solution {
public:
bool isPowerOfTwo(int n){
    int c=0 ,n_old=n;
    if(n==0){
        return 0;
    }else if (n==1){
        return true;
    }else{
        while(n_old%2==0){
            c++;
            n_old/=2;
        }
        if(pow(2,c)==n){
            return 1;
        }else{
            return 0;
        }
        
        
    }}};
    
    
   
