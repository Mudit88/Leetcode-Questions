class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a = 0;
        int b = 1;
        vector<int> ans(nums.size());
        for(int x : nums)
        {
            if(x>0)
            {
                ans[a] = x;
                a+=2;
            }
            else 
            {
                ans[b] = x;
                b+=2;
            }
        }
        return ans;
        
    }
};