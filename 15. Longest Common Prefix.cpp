/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.


*/
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string pref=strs[0];
        int prl=pref.length();
        for(int i=1;i<strs.size();i++){
            string s=strs[i];
            while(prl>s.length() || pref!=s.substr(0,prl))
            {
                prl--;
                if(prl==0)
                    return "";
                pref=pref.substr(0,prl);
            }
            
        }
        return pref;
            
            
            
            
            
            
            
            
    }
};


