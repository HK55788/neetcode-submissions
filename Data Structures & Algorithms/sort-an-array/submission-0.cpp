class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int i,j,temp;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size()-i-1;j++){
                if(nums[j+1]<nums[j]){
                    temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        return nums;
    }
};