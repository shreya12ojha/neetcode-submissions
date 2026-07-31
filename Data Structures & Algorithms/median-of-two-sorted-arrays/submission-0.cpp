class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int ch : nums2){
            nums1.push_back(ch);
        }

        sort(nums1.begin() , nums1.end());
        double median;
        int n = nums1.size();
        if(nums1.size() % 2 == 0) {
            double sum = nums1[n / 2] + nums1[(n - 1) / 2];
            median = sum / 2;
        }else{
            median = nums1[(n - 1) / 2];
        }

        return median;
    }
};