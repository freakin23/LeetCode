class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int res = 0;
        for (auto x : nums) {
            res ^= x;
        }
        return res;
    }
};