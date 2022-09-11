class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for(int x : nums)
        {
            if(x<0)a.push_back(x);
            else b.push_back(x);
        }
        int i = 0;
        int j = 0;
        nums.clear();
        for(;i<a.size() and j<a.size();)
        {
            nums.push_back(b[i]);
            nums.push_back(a[j]);
            i++;
            j++;
        }
        return nums;
    }
};