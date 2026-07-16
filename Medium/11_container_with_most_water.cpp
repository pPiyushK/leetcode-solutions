class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int maxWater =0;

        while(i<j){
            int width =j-i;
            int hei =min(height[i],height[j]);
            int currWater= width * hei;
            maxWater = max(currWater,maxWater);
            height[i]> height[j]? j--:i++;
        }
        return maxWater;
    }
};