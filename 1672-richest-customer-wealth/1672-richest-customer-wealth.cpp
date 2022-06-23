class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum, maxsum=0;
        for(vector<int> i: accounts) {
            sum=0;
            for(int j: i) sum+=j;
            if (sum>maxsum) maxsum=sum; 
        }
        return maxsum;
    }
};