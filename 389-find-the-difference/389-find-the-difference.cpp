class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> ans(26,0);
        for(int i = 0;i<t.size();i++)
        {
            if(i<s.size())
            {
                ans[s[i]-'a']--;
            }
            ans[t[i]-'a']++;
        }
        int a = 0;
        for(int i = 0;i<26;i++)
        {
            if(ans[i]==1)
            {
                a = i+97;
                break;
            }
        }
        return char(a);
        
    }
};