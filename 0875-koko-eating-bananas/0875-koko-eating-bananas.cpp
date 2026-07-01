class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int n = a.size();
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            mx = max(mx, a[i]);
        }

        int low = 1;
        int high = mx;
        int ans = mx;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hours = 0;
            for (int i = 0; i < n; i++) {
                hours += (a[i] + mid - 1) / mid;
            }
            if (hours <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};