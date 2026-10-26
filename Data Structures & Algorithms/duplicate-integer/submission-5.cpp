class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans=0;
        int n,i;
        n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            if(((i+1)!=n)&&(nums[i]==nums[i+1]))
            ans=1;
        }
        return ans;
    }
};