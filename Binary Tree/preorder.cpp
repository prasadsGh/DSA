/* dfs traversal of binary tree- 
 preorder,
 inorder, 
 postorder 

*/

/*
 preorder- root, left,right
 inorder- left,root,right
 postorder- left, right,root

*/

// recursive   code for preorder traversal

void preorder(node)
{
    if(node==NULL) return;

    cout<<node->data<<endl;
    preorder(node->left);
    preorder(node->right);
}
