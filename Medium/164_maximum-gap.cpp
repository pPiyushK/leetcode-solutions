class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size(),max=0;
        if(n<= 1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0; i< n-1; i++){
            if(nums[i+1]-nums[i]>max){
                max = nums[i+1]-nums[i];
            }
        }
        return max;
    }
};