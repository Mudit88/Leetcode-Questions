class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums)mp[x]++;
        int count1 = 0;
        int count2 = 0;
        for(auto x : mp)
        {
            count1+= x.second/2;
            count2+= x.second%2; 
        }
        vector<int> ans ={count1,count2};
        return ans;
        
    }
};