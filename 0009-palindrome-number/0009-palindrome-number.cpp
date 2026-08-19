class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long temp=0;
        int n= x;
        while(n!=0){
            temp=temp*10+n%10;
            n/=10;
        }
        
        if(x==temp){
            return true;
        }
        else{
            return false;
        }
  
    }
};