class Solution {
public:
    int absDifference(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int minSum = 0, maxSum = 0;
        int n = arr.size();

        for (int i = 0; i < k; i++) {
            minSum += arr[i];
            maxSum += arr[n - 1 - i];
        }
        return maxSum - minSum;
    }
};