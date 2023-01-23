class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        set<int> map;
        vector<int> indexes;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j] && map.find(j) == map.end()){
                    map.insert(j);
                    indexes.push_back(j);
                    break;
                }
            }
        }
        return indexes;
    }
};