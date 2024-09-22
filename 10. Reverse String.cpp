/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        for(int i=0;i<l/2;i++)
        {
            int t=s[i];
            s[i]=s[l-i-1];
            s[l-i-1]=t;
        }
    }
};
