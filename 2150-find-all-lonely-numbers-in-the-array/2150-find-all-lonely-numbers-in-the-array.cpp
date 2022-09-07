class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums)
        {
            mp[x]++;
        }
        vector<int> ans;
        for(auto x : mp)
        {
            int a = x.first;
            // cout<<a<<", a-1 : "<<a-1<<", a+1 :"<<a+1<<endl;
            if(x.second==1 and mp.count(a-1)==0 and mp.count(a+1)==0)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};