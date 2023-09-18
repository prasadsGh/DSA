// postorder--> left right root 

void postorder(node)
{
    if(node==NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<endl;

}

