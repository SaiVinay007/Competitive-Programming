#include <bits/stdc++.h> 
int evalTree(node* root)
{
    // empty tree 
    if (!root) 
        return 0; 
  
    // leaf node i.e, an integer as number cannot have children which is meaningless
    if (!root->left && !root->right) 
        return stoi(root->data); 
  
    // Evaluate left subtree 
    int l_val = evalTree(root->left); 
  
    // Evaluate right subtree 
    int r_val = evalTree(root->right); 
  
    // Check which operator to apply 
    if (root->data=="+") 
        return l_val+r_val; 
  
    if (root->data=="-") 
        return l_val-r_val; 
  
    if (root->data=="*") 
        return l_val*r_val; 
    
    return l_val/r_val; 

}
