class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map <int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int index=0;
        for(auto it:mpp){
            if(it.second>=2){
                nums[index]=it.first;
                index++;
                nums[index]=it.first;
                index++;
            }else{
                nums[index]=it.first;
                index++;
            }
        }
        return index;
    }
};