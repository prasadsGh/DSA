// level wise order is bfs traversal

// we will use queue for level order traversal 

void level()
{
    Node *root;

    queue<node>q;
    q.insert(root);
    while(!q.empty())
    {
        node temp=q.front();
        cout<<temp->data<<endl;
        if(temp->left!=NULL) q.insert(temp->left);
        if(temp->right!=NULL) q.insert(temp->right);
        q.pop();
    }
    
}


