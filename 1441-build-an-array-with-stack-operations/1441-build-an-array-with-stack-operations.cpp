class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        for(int i=0,j=0;i<n,j<target.size();i++) {
            ans.push_back("Push");
            if(i+1 != target[j]) {
                ans.push_back("Pop");
                j--;
            }
            j++;
        }
        return ans;
    }
};