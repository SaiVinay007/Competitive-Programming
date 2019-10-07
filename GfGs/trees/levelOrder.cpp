// Insertion in a Binary Tree in level order //

#include<iostream>
#include<queue>

using namespace std;


/* A binary tree node has key, pointer to left child and a pointer to right child */
struct Node 
{
    int key;
    struct Node *left, *right;
};


/* function to create a new node of tree and returns pointer to the Node */
struct Node* newNode(int key)       // First two words are return type(i.e, pointer to a Node i.e, the address)
{
    struct Node *temp = new Node;   // This is same as float *temp = (some random value); where temp is the pointer to Node(contains address)
    temp->key = key;                    // same as (*temp).key
    temp->left = temp->right = NULL;    // same as (*temp).left and (*temp).right
    return temp;                        // temp is the address and *temp is the node;
}; 


/* Inorder traversal of a binary tree*/
void inorder(struct Node* temp)
{
    if(!temp)
        return;
    
    inorder(temp->left);
    cout<<temp->key<<" ";
    inorder(temp->right);
}


/*function to insert element in binary tree */
void insert(struct Node *temp, int key)
{
    queue<struct Node*> q; 
    q.push(temp); 
  
    // Do level order traversal until we find an empty place.  
    while (!q.empty()) 
    { 
        struct Node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->left) 
        { 
            temp->left = newNode(key); 
            break; 
        } 
        else
            q.push(temp->left); 
  
        if (!temp->right)
        { 
            temp->right = newNode(key); 
            break; 
        } 
        else
            q.push(temp->right); 
    } 

}


int main(){
    struct Node* root = newNode(10); 
    root->left = newNode(11); 
    root->left->left = newNode(7); 
    root->right = newNode(9); 
    root->right->left = newNode(15); 
    root->right->right = newNode(8); 
  
    cout << "Inorder traversal before insertion:"; 
    inorder(root); 
  
    int key = 12; 
    insert(root, key); 
  
    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    inorder(root); 

    return 0;
}