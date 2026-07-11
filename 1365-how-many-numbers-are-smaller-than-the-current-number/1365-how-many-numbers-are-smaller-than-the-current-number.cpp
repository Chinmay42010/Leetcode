class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> mp;

        for (int i = 0; i < sorted.size(); i++) {
            if (mp.find(sorted[i]) == mp.end())
                mp[sorted[i]] = i;
        }

        vector<int> ans;
        for (int num : nums) {
            ans.push_back(mp[num]);
        }

        return ans;

        //brute force soln
        // vector<int> ans;
        // int n = nums.size();
        // int cnt = 0;

        // for(int i  = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {
        //         if(i != j && nums[i] > nums[j]) cnt++;
        //     }
        //     ans.push_back(cnt);
        //     cnt = 0;
        // }

        // return ans;
    }
};