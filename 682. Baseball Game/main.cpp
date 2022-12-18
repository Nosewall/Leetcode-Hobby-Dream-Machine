class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        vector<int> points;
        for (string op : ops)
            if (op == "+") points.push_back(*points.rbegin() + *(points.rbegin()+1));
            else if (op == "D") points.push_back(points.back()*2);
            else if (op == "C") points.pop_back();
            else points.push_back(stoi(op));

        return accumulate(points.begin(), points.end(), 0);
    }
};