class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int sz = nums.size();
        if (k == 1) return 0;

        sort(nums.begin(), nums.end()); 

        int minDif = INT_MAX;

        for (int i = 0; i + k - 1 < sz; i++) {
            int currDif = nums[i + k - 1] - nums[i];
            minDif = min(minDif, currDif);
        }

        return minDif;
    }
};