class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        for(int x : nums)
        {
            if(x%2==0)
            {
                m[x]++;
            }
        }
        int ans = INT_MIN;
        int answer = -1;
        for(auto p : m)
        {
            if(p.second>ans)
            {
                ans = p.second;
                answer = p.first;
            }
        }
        return answer;
    }
};