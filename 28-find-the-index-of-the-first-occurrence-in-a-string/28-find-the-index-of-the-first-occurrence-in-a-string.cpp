class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                bool flag = true;
                for(int j = 0;j<needle.size();j++)
                {
                    if(haystack[i+j]!=needle[j])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)return i;
            }
        }
        return -1;
    }
};