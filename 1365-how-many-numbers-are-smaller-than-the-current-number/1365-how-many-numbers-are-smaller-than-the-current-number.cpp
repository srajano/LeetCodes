class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> op, sorted = nums;
        int j;
        sort(sorted.begin(), sorted.end());
        for(int i: nums) {
            j=0;
            while(sorted[j] != i) j++;
            op.push_back(j);
        }
        return op;
    }
};