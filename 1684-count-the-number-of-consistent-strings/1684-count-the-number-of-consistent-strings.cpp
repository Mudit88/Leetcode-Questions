class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> p;
        for(char c : allowed)p[c]++;
        int count =0;
        for(string s : words)
        {
            bool flag = true;
            for(char c : s)
            {
                if(p.count(c)==0)flag=false;
            }
            if(flag)count++;
        }
        return count;
    }
};