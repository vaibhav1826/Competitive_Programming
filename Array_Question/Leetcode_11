// LeetCode Problem 11: Container With Most Water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxvalue=0;
        while(i<j){
            int minvalue=min(height[i],height[j]);
            maxvalue=max(maxvalue,(minvalue*(j-i)));
            if(height[i]>height[j]){
                j--;
            }
            else if(height[i]<height[j]){
                i++;
            }
            else if(height[i]==height[j]){
                i++;
                j--;
            }
        }
        return maxvalue;
    }
};