class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;
        int low=0;
        int high=heights.size()-1;
        while (low<high){
            int height=min(heights[low],heights[high]);
            int dist=high-low;
            int area=height*dist;
            maxi=max(maxi,area);
            if(heights[low]<=heights[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxi;
    }
};
