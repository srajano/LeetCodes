class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=0;
        vector<bool> op;
        for(int i: candies)
            if(m<i) m=i;
        for(int i: candies)
            op.push_back(i+extraCandies >= m);
        return op;
    }
};