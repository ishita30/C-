//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            if(nums[i]+nums[j]==target)
            {
              v.push_back(j);
              v.push_back(i) ; 
            }
        }
    return v;    
    }