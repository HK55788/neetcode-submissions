class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int i, j,count=0;
        for (i = 0; i < nums.size(); i++) {
            count=0;
                for (j = 0; j < nums.size(); j++) {
                    if (nums[j] == nums[i]) {
                        count++;
                    }
                }
            if (count > nums.size() / 2){
                return nums[i];
            }
            
        }
        return -1;
    }
};