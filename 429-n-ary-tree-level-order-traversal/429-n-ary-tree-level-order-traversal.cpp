/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int h(Node * root)
    {
        if(!root)
        {
            return 0;
        }
        int maxi = 0;
        for(auto x: root->children)
        {
            int temp = h(x);
            if(temp>maxi)
            {
                maxi=temp;
            }
        }
        return 1+maxi;
    }
    void f(Node * root,int i,vector<int> &p)
    {
        if(i==1)
        {
            p.push_back(root->val);
        }
        for(auto x: root->children)
        {
            f(x,i-1,p);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        int height = h(root);
        vector<vector<int>> v;
        for(int i=1;i<=height;i++)
        {
            vector<int> p;
            f(root,i,p);
            v.push_back(p);
        }
        return v;
        
        
    }
};