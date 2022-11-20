class Solution{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c){
        int height = nums.size(), width = nums[0].size();
        if(height * width != r * c){
            return nums;
        }

        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i = 0; i < height; i++){
            for (int j = 0; j < width; j++){
                int k = i * width + j;
                res[k / c][k % c] = nums[i][j];
            }
        }
        return res;
    }
};