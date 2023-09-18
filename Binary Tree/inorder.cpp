//  left root right 



void inorder(node)
{
    if(node ==NULL) return ;
    preorder(node->left);
    cout<<node->data<<endl;
    preorder(node->right);

}