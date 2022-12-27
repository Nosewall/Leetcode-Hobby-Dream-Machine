class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        int numberOfFullBags = 0;
        vector<int> rocksNeeded;
        for(int i = 0; i < n; i++){
            if (rocks[i] == capacity[i]){
                numberOfFullBags++;
                continue;
            }
            else if(rocks[i] < capacity[i]){
                rocksNeeded.push_back(capacity[i] - rocks[i]);
            }
        }
        sort(rocksNeeded.begin(), rocksNeeded.end());
        for(int i = 0; i < rocksNeeded.size(); i++){
            if(rocksNeeded[i] <= additionalRocks){
                additionalRocks -= rocksNeeded[i];
                numberOfFullBags++;
            } else{
                break;
            }
        }
        return numberOfFullBags;

    }
};