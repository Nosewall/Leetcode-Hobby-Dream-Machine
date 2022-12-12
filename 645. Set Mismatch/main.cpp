class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;

        //Repeated Number
        for(int i=0;i<n;i++)
            if(nums[abs(nums[i])-1]>0)
                nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            else
                res.push_back(abs(nums[i]));


        //Missing Number

        for(int i=0;i<n;i++)
            if(nums[i]>0)
                res.push_back(i+1);
        return res;
    }
};