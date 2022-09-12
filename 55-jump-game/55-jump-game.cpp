class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            if(ans<i)return false;
            ans = max(ans,i+nums[i]);
        }
        return true;
    }
};