int getSize(Node* node)
{
   // Your code here
   
   if (!node)
   {
       return 0;
   }

    int val1 = getSize(node->left);
    int val2 = getSize(node->right);
    
    return 1 + val1 + val2;
    
}