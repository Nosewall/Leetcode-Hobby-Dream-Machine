class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size() == 1) return true;
        if(bits.size() == 2){
            if(bits[0] == 1){
                return false;
            }
            return true;
        }
        int secondLastBit = bits[bits.size() - 2];
        if (secondLastBit == 0){
            return true;
        }
        bool mustBe = false;
        for(int i = bits.size() - 3; i >= 0; i--){
            if (bits[i] == 1){
                mustBe = !mustBe;
            }
            if (i == 0 | bits[i] == 0){
                return mustBe;
            }
        }
        return false;
    }
};