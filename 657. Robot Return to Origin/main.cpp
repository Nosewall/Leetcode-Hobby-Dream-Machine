class Solution {
public:
    bool judgeCircle(string moves) {
        int xCoord = 0, yCoord = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U')
                yCoord--;
            else if (moves[i] == 'D')
                yCoord++;
            else if (moves[i] == 'L')
                xCoord--;
            else if (moves[i] == 'R')
                xCoord++;
        }
        return xCoord == 0 && yCoord == 0;
    }
};