class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> op;
        for(int i=0; i< nums.size(); i++) {
            op.push_back(nums[i]);
        }
        for(int i=0; i< nums.size(); i++) {
            op.push_back(nums[i]);
        }
        return op;
    }
};