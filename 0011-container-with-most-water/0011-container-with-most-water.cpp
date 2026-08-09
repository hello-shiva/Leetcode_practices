class Solution {
public:
    int maxArea(vector<int>& height) {

        //Brute Approach

      /*  int maxWater= 0; //(Answer)
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int width = j-i;
                int heights= min(height[i],height[j]);
                int area= width * heights;
                maxWater= max(maxWater,area);
            }
        }
        return maxWater;*/

        //optimised approach using 2 pointer approach..
        int lp=0,rp=height.size()-1, ans=0;
        while(lp<rp){
            int width=rp-lp;
            int heights=min(height[lp],height[rp]);
            int currWater= width*heights;
            ans = max(ans,currWater);
            height[lp]<height[rp]? lp++ :rp--;
        }
        return ans;
    }
};