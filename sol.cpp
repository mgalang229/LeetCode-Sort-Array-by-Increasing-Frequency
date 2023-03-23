class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<string, int> mp;
        for (int& x : nums) {
            mp[to_string(x)]++;
        }
        sort(nums.begin(), nums.end(), [&](const int& a, const int& b) {
            if (mp[to_string(a)] == mp[to_string(b)]) {
                return a > b;
            }
            return mp[to_string(a)] < mp[to_string(b)];
        });
        return nums;
    }
};
