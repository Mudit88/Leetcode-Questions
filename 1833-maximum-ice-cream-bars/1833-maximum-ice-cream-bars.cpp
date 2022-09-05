class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        priority_queue<int> pq;
        int sum = 0;
        for(int i = 0;i<costs.size();i++)
        {
            if(sum+costs[i]<=coins)
            {
                sum+=costs[i];
                pq.push(costs[i]);
            }
            else
            {
                if(!pq.empty() and pq.top()>costs[i])
                {
                    sum-=pq.top();
                    pq.pop();
                    sum+=costs[i];
                    pq.push(costs[i]);
                }
            }            
        }
        return pq.size();
        
    }
};