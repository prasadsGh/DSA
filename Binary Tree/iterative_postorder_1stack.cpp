vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>ans;
        if(root==NULL) return ans;
        TreeNode* curr=root;
        while(!s.empty() or curr!=NULL)
        {
            if(curr!=NULL)
            {
                s.push(curr);
                curr=(curr->left);

            }
            else 
            {
                TreeNode* temp=(s.top()->right); 
                if(temp==NULL)
                {
                    temp=s.top();
                    ans.push_back(temp->val);
                    s.pop();
                    while(!s.empty() and (temp)==(s.top()->right))
                    {
                       temp=s.top();
                       s.pop();
                       ans.push_back(temp->val);
                        
                    }
                }
                else curr=temp;
            }
        }

        return ans;
        
    }