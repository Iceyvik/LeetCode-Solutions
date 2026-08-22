class Solution {
public:
    bool checkDivisibility(int n) {
        int dsum=0;
        int p=1;
        int temp=n;
        while(temp>0){
            dsum+=temp%10;
            p*=temp%10;
            temp/=10;
        }
        int sum=dsum+p;
        if(n%sum==0) return true;
        else return false;
    }
};