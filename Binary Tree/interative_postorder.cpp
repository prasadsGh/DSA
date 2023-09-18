
// left right root 


vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    stack<TreeNode *> st1, st2;
    st1.push(root);
    while (true)
    {
        if (st1.empty())
            break;
        root = st1.top();
        st1.pop();
        st2.push(root);
        if (root->left)
            st1.push(root->left);
        if (root->right)
            st1.push(root->right);
    }

    while (!st2.empty())
    {
        ans.push_back(st2.top()->val);
        st2.pop();
    }

    return ans;
}