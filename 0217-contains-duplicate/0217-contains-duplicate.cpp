class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int n : nums) {

            seen.insert(n);
        }

        if (nums.size() > seen.size()) {
            return true;
        }

        return false;
    }
};