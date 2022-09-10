class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size();
        int count = 0;
        bool flag = false;
        int c = 0;
        for(int i = 0;i<n;i++)
        {
            if(flag == false and s[i]=='*')count++;
            else if(s[i]=='|')
            {
                if(c&1)
                {
                    c = 0;
                    flag = false;
                }
                else
                {
                    c = 1;
                    flag = true;
                }
            }
        }
        return count;
        
    }
};