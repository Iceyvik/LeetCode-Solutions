class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mpp;
        int l=0;
        int r=0;
        int maxl=0;
        while(r<n){
            if(mpp[nums[r]]<k){
                mpp[nums[r]]++;
                maxl=max(maxl,r-l+1);
                r++;
            }
            else{
                mpp[nums[l]]--;
                l++;
            }
        }
        return maxl;
    }
};