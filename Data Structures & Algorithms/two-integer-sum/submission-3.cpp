class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> N;

        for (int i = 0; i < nums.size(); i++) {
            auto j = N.find(target - nums[i]);
            if (j != N.end() && j->second != i) {
                return {j -> second, i};
            }
            N[nums[i]] = i;
        }
        return {};
    }
};
