class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> m;
        vector<string>s;
        for(int i=0;i<list1.size();i++){
            if(m.find(list1[i])==m.end()){
                m.insert({list1[i],i});
            }
        }
        int res=INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end()){
                if(m[list2[i]]+i<res){
                    res=m[list2[i]]+i;
                }
            }
        }
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end() && m[list2[i]]+i==res){
                s.push_back(list2[i]);
            }
        }

        return s;
    }
};