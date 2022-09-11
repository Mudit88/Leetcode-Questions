class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        int count = 0;
        for(int x : nums)
        {
            if(x==pivot)count++;
        }
        for(int x : nums)
        {
            if(x<pivot)
            {
                ans.push_back(x);
            }
        }
        for(int i = count;i>0;i--)
        {
            ans.push_back(pivot);
        }
        for(int x : nums)
        {
            if(x>pivot)
            {
                ans.push_back(x);
            }
        }
        return ans;
        
    }
};