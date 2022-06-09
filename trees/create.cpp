#include <bits/stdc++.h>
using namespace std;
class node
{
    int key;
    node *left;
    node *right;

public:
    node()
    {
        key=0;
        left=right=NULL;
    }
    node(int key)
    {
        this->key = 0;
        this->left = NULL;
        this->right=NULL;
    }
    friend class Binary_tree;
};
class Binary_tree
{
public:
    node *root;
    Binary_tree()
    {
        root = NULL;
    }
    node *create()
    {
        int key;



    cout << "Enter the data and enter zero for no data  : \n";
    
    cin >> key;
    if (key == 0)
        return NULL;
    node *root = new node(key);
    cout<<"Enter the data of left node of "<<key<<"\n";
    root->left= create();
    cout<<"Enter the data of right node of "<<key<<"\n";
    root->right= create();
    return root;

    }
    void inorder(node *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->key<<" ";
            inorder(root->right);
        }
        
    };
    void preorder();
    void postorder();
    int height();
};

int main()
{   node *root;
    Binary_tree t1;
    root=t1.create();
    t1.inorder(root);
    return 0;
}