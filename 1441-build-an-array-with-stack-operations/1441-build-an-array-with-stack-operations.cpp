class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int l = target.size();
        vector<string> a;

        for (int i = 0, j = 0; i < n; i++) {
            a.push_back("Push");
            
            if (i + 1 == target[j] && j == l - 1) {
                break;
            }
            if (i + 1 != target[j]) {
                a.push_back("Pop");
            } else {
                j++;
            }
        }
        return a;
    }
};