class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string ans = strs[0];
    int n = strs.size();

    for (int i = 1;i < n;i++) {
        string curr = strs[i];

        if (curr == ans) continue;

        int j = 0;

        while (j < min(curr.size(), ans.size()) && curr[j] == ans[j]) j++;
        
        ans = ans.substr(0, j);
    }
    return ans;
}
};