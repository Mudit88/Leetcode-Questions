class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(string &s : words)
        {
            mp[s]++;
        }
        map<int,set<string>,greater<int>> ms;
        for(auto &x : mp)
        {
            ms[x.second].insert(x.first);
        }
        vector<string> v;
        for(auto &c : ms)
        {
            if(k>0)
            {
                for(string p : c.second)
                {
                    if(k>0)
                    {
                        v.push_back(p);
                        k--;
                    }
                    else break;
                }
            }
            else break;
        }
        return v;
        
    }
};