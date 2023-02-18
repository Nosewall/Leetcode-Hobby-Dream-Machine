class Solution {
public:
    int search(vector<int>& nums, int target) {
        int vs=nums.size();
        if(vs==0)
            return-1;
        int st=0;
        int et=vs-1;
        while(st<=et)
        {
            int middle=(st+et)/2;
            if(nums[middle]==target)
                return middle;
            if(nums[middle]>target)
                et=middle-1;
            if(nums[middle]<target)
                st=middle+1;
        }
        return -1;
    }
};