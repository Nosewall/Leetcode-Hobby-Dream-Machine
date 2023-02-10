class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();

        map<int, set<int>> g;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                g[j - i].insert(matrix[i][j]);
                // alternatively, you can check the size here
            }
        }
        for (auto x : g) {
            // if the size under the group (x.first) is not 1
            // then it is not Toeplitz
            if (x.second.size() != 1) {
                return false;
            }
        }
        return true;
    }
};