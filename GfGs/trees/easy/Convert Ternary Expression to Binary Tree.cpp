Node *convertExpression(string str,int i)
{
    //add code here.
    // here i is the current position in the string
    
    
    if(i>=str.length())
    {
        return NULL;
    }
    Node *root = new Node;
    root->data = str[i];
    root->left = root->right = NULL; // if we remove this line then its a segmentation fault

    
    // Node *root = newNode(str[i]);
    // Node *root = new Node();        // ** IF you remove brackets its a segmentation fault
    // root->data = str[i];
    i++;
    
    if(i < str.length() && str[i]=='?')
    {
        root->left = convertExpression(str, i+1);
    }
    if(i < str.length() && str[i]==':')
    {
        root->right = convertExpression(str, i+1);
    }
    return root;
    
    
    

}