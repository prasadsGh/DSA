// root left right

// we will use stack

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    stack<TreeNode *> s;
    s.push(root);
    while (!s.empty())
    {
        TreeNode *temp = s.top();
        int value = ((temp->val));
        ans.push_back(value);
        s.pop();
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }

    return ans;
}