int height(Node* root)
{
    // Write your code here.
    if(root==NULL)
        return -1;
    int ldepth = height(root->left);
    int rdepth = height(root->right);
    if(ldepth>rdepth)
        return ldepth+1;
    else
        return rdepth+1;
}
