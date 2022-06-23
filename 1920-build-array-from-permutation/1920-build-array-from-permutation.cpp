class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> op;
        for(int i=0; i<nums.size(); i++)
            op.push_back(nums[nums[i]]);
        return op;
    }
};