class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        vector<int> result1, result2;
        while (i < version1.size() || j < version2.size()) {
            result1 = helper(version1, i);
            result2 = helper(version2, j);
            int v1 = result1[0], v2 = result2[0];
            i = result1[1]; j = result2[1];
            if (v1 > v2) return 1;
            else if (v1 < v2) return -1;
        }
        return 0;
    }
    
    vector<int> helper(string s, int idx) {
        int num = 0;
        while (idx < s.size()) {
            if (s[idx] == '.') break;
            else num = num * 10 + (s[idx] - '0');
            idx++;
        }
        return {num, idx + 1};
    }
};