class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int max_water=0;
        while(left<right){
            int width=right-left;
            int curr_height=min(heights[left],heights[right]);
            int curr_water=width*curr_height;
            max_water=max(max_water,curr_water);

        
        if(heights[left]<heights[right]){
            left++;
        }
        else{
            right--;
        }
        }
        return max_water;
        
    }
};
