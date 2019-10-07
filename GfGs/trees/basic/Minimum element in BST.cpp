Structure of the node of the binary search tree is as
struct Node 
{
	int data;
	Node* left;
	Node* right;
};
*/
// your task is to complete the below function
int minValue(Node* root)
{
    // Code here

    if(!root)
    {
        return INT_MAX;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    
    int val = root->data;
    int val1 = minValue(root->left);
    int val2 = minValue(root->right);
    
    int min;
    
    // if (val<=val1 && val<=val2)
    // {
    //     min=val;
    // }
    // else if(val1<=val && val1<=val2)
    // {
    //     min=val1;
    // }
    // else
    // {
    //     min=val2;
    // }
    
    // return min;
    return min(val, min(val1, val2));

}