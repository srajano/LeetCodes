class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                i--;
            }
            j++;
            if(j>nums.size()) return;
        }
    }
};