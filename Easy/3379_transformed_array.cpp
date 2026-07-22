class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int i ;
        for(i = 0; i <n; i++){
            int ans = (i +nums[i])%n;
            if(ans<0){
                ans += n;
            }
            result[i]=nums[ans];
        }
        return result;
    }
};