
// left root right

vector<int> inorderTraversal(TreeNode *root)
{
    stack<TreeNode *> s;
    TreeNode *node = root;
    vector<int> ans;
    if (root == NULL)
        return ans;
    while (true)
    {
        if (node)
        {
            s.push(node);
            node = (node->left);
        }
        else
        {
            if (s.empty())
                break;
            node = s.top();
            ans.push_back(node->val);
            s.pop();
            node = (node->right);
        }
    }

    return ans;