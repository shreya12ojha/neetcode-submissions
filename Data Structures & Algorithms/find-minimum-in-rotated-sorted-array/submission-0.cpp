class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        int ans = INT_MAX;
        while(s <= e) {
            int m = s + (e - s) / 2;
            ans = min(nums[m], ans);
            if(nums[e] < nums[m]) {
                s = m + 1;
            } else {
                e = m - 1;
            }
        }
        return ans;
    }
};