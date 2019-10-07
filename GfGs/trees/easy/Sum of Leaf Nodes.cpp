int sumLeaf(Node* root)
{
    // Code here
    if(!root)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    int val1 = sumLeaf(root->left);
    int val2 = sumLeaf(root->right);
    
    return val1+val2;
}