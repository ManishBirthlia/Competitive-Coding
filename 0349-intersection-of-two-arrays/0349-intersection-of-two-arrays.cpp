class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>s;
        vector<int> v;
        for(int i=0;i<size(nums1);i++){
            for(int j=0;j<size(nums2);j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums2[j]);
                    nums2[j]=-1;
                    break;
                }
            }
        }
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};