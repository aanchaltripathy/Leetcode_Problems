class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //             return{i,j}; 
        //     }
        // }
        // return {};

      
        //two-pass hashtable method
        unordered_map<int,int>h;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            h[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int comp=target-nums[i];
            if(h.count(comp) && h[comp]!=i)
            {
                return{i,h[comp]};
            }
        }
        return {};
    }
};
