
//node structure of binary tree node :

struct node
{
    int val;
    struct node *left;
    struct node *right;
    node(int k)
    {
        val=k;
        left=right=NULL;
    }

}