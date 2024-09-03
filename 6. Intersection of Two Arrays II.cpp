/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
*/
 

 /* int m=0;
        int a=nums1.size();
        int b=nums2.size();
        if(a>b)
            m=a;
        else
            m=b;
        vector<int> store(m);
        for(int i=1;i<=m;i++)
        {
            
           
                for(int j=1;j<=a;j++)
                {
                    for(int k=1;k<=b;k++)
                    {
                        while(store[i]!=nums2[i])
                        {
                        if(nums1[j]==nums2[k])
                            store[i]=nums1[j];
                        }
                    }
                }
           
        }
        return store;*/
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        vector<int>arr;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<n&&j<m){
            if(nums1[i]==nums2[j]){
                arr.push_back(nums1[i]);
                j++;
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
            
        }
        return arr;
