class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        map<char,int> mpp;
        int l=0;
        int r=0;
        int maxl=0;
        while(r<n){
            if(mpp[s[r]]<2){
                mpp[s[r]]++;
                maxl=max(maxl,r-l+1);
                r++;
            }
            else{
                mpp[s[l]]--;
                l++;
            }
        }
        return maxl;
    }
};