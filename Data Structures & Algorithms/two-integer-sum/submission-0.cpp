class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> N;

        for (int l = 0; l < nums.size(); l++) {
            N[nums[l]] = l;
        }

        for (int i = 0; i < nums.size(); i++) {
            auto j = N.find(target - nums[i]);
            if (j != N.end() && j->second != i) {
                return {i, j -> second};
            }
        }
        return {};
    }
};
