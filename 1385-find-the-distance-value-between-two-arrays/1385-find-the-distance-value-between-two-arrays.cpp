class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0, j = 0;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        for (int x : arr1) {
            while (j < arr2.size() && arr2[j] < x - d)
                j++;

            if (j == arr2.size() || arr2[j] > x + d)
            res++;
        }

        return res;
    }
};