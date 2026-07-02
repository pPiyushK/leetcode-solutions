class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;

        for (int i = 0; i < nums.size(); i++) {
            bool ispresent = false;
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == nums[i]) {
                    ispresent = true;
                    break;
                }
            }
            if (!ispresent) {
                arr.push_back(nums[i]);
            }
        }

        nums = arr;
        return arr.size();
    }
};