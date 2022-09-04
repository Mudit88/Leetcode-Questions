class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        int ans = INT_MIN;
        for(string s : words)
        {
            mp[s]++;
            ans = max(ans,mp[s]);
        }
        vector<priority_queue<string,vector<string>,greater<string>>> a(ans);
        for(int i = 0;i<ans;i++)
        {
            priority_queue<string,vector<string>,greater<string>> x;
            a[i] = x;
        }
        for(auto m : mp)
        {
            a[m.second-1].push(m.first);
        }
        vector<string> answer;
        for(int i = a.size()-1;i>=0 and k>0;i--)
        {
            while(k>0 and !a[i].empty())
            {
                answer.push_back(a[i].top());
                a[i].pop();
                k--;
            }
        }
        return answer;
        
    }
};