class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int total = 0;
        int lmax = height[0];
        int rmax = height[r];
        while(l <= r){
            if(height[l] < height[r]){
                lmax = max(lmax, height[l]);
                if(lmax - height[l] > 0){
                    total += lmax - height[l];
                }
                l++;
            }
            else{
                rmax = max(rmax, height[r]);
                if(rmax - height[r] > 0){
                    total += rmax - height[r];
                }
                r--;
            }
        }
        return total;
    }
};
