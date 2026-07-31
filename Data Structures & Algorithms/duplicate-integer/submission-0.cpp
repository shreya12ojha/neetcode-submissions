class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numi;
        for(auto it : nums){
            if(numi.find(it) != numi.end()) return true;
            numi.insert(it);
        }
        return false;
    }
};
