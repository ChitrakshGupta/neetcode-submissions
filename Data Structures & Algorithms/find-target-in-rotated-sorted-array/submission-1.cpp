class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        while (end >= st) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                return mid;

            } else if (nums[end] > nums[mid]) {  // left sort
                if (nums[mid] < target && nums[end] >= target) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }

            }

            else {
                // right sorted

                if (nums[mid] > target && nums[st] <= target) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
        }

        return -1;
    }
};
