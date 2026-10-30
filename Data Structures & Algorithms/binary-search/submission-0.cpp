class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end, start, mid;

        end = nums.size() - 1;
        start = 0;

        while (start <= end) {
            mid = (start + end) / 2;

            if (target > nums[mid]) {
                start = mid + 1;
            }
            else if (target < nums[mid]) {
                end = mid - 1;
            }
            else {
                return mid;
            }
        }

        return -1;
    }
};