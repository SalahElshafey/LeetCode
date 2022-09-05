class Solution {
public:
    int myAtoi(string s) {
        int f=0,f2=0,i=0;
        long long res=0,p=s.length();
       while(s[i]==' '){
           i++;
       }
        for(i;i<p;i++){
            if(s[i]=='-'){
             f=1; i++;}
            else if(s[i]=='+'){
                i++;
            }
        if(isdigit(s[i])==0){
            return 0;
            break;}
        
        
     else{
         if(isdigit(s[i])!=0){
              res=res*10+(s[i]-'0');
             if(res>INT_MAX){
                 res=INT_MAX;
                 f2=1;
                 break;
             }
            
         if(isdigit(s[i+1])==0){
             break;}
        }}
        }
       
            if(f2==1 && f==1){
               return INT_MIN; 
             }else if (f2==1){
                return INT_MAX;
            }
        if(f==1)
            return -1*res;
        else
          return res;
    }
};



//solution 2
class Solution {
public:
    int myAtoi(string s) {
        int fg=0;
        int fg2=0;
       
        long long num=0;
        int n=s.size();
        int i=0;
        while(i<n && s[i]==' ')
            i++;
        if(i<n && s[i]=='+')
            i++;
        else if(i<n && s[i]=='-')
        {fg=1;
        i++;}
        
        
       for(i;i<s.size();i++)
       {
        
           
           
           if(isdigit(s[i])==0)
               break;
           
           if(isdigit(s[i]))
              {
                  num=num*10+(s[i]-'0');
               
               if(num>INT_MAX ){
                   num=INT_MAX;
                    fg2=2;
               }
               
                  
              }
       }
        
        if(fg2==2 && fg==1)
            return INT_MIN;
        
        if(fg==1 ){
            num=num*-1;
            if(num<INT_MIN)
                num=INT_MIN;
        }
        
        if(num>INT_MAX)
            num=INT_MAX;
        
        return num;
    }
};
