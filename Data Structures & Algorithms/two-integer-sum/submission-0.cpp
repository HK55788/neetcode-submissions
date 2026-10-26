class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,temp1,temp2;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target)
                temp1=i,temp2=j;
            }
        }
        vector<int> ans(2);
        ans[0]=temp1;
        ans[1]=temp2;
        return ans;
    }
};
