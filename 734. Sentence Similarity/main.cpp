class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if (size(sentence1) != size(sentence2)) return false;

        unordered_map<string, unordered_set<string>> similar;
        for (vector<string>& pair : similarPairs) {
            similar[pair[0]].insert(pair[1]);
            similar[pair[1]].insert(pair[0]);
        }

        for (int i = 0; i < size(sentence1); i++) {
            if (sentence1[i] != sentence2[i] && !similar[sentence1[i]].count(sentence2[i])) {
                return false;
            }
        }
        return true;
    }
};