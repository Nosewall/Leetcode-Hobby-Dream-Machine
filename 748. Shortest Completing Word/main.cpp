class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string newString = "";
        //Treat License plate. RemoveConvert to lower case
        for(int i = 0; i < licensePlate.length(); i++){
            if(isalpha(licensePlate[i])){
                newString += tolower(licensePlate[i]);
            }
            licensePlate[i] = tolower(licensePlate[i]);
        }
        licensePlate = newString;

        int shortestWordIndex = -1;
        for(int i = 0; i < words.size(); i++){
            set<int> indexTracker;
            for(int j = 0; j < words[i].length(); j++){
                for(int k = 0; k < licensePlate.length(); k++){
                    if( words[i][j] == licensePlate[k]){
                        if(indexTracker.find(k) == indexTracker.end()){
                            indexTracker.insert(k);
                            break;
                        } else {
                            continue;
                        }
                    }
                }
            }
            if(indexTracker.size() == licensePlate.length()){
                if(shortestWordIndex == -1 || words[i].length() < words[shortestWordIndex].length()){
                    shortestWordIndex = i;
                }
            }
        }

        return words[shortestWordIndex];
    }
};