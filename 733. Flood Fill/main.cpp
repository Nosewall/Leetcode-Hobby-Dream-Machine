class Solution {
public:
    void help(int i, int j, int initialColor, int newColor, vector<vector<int>>& image){
        int n= image.size(), m=image[0].size();
        if(i<0 || j<0 || i>=n || j>=m || image[i][j] != initialColor)
            return;
        image[i][j] = newColor;
        help(i-1, j, initialColor, newColor, image);
        help(i+1, j, initialColor, newColor, image);
        help(i, j-1, initialColor, newColor, image);
        help(i, j+1, initialColor, newColor, image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        if(initialColor != color)
            help(sr,sc,initialColor, color, image);
        return image;
    }
};