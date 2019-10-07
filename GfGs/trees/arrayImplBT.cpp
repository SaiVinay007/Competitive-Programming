#include<iostream>
using namespace std;


struct Node{
    int key;
    struct Node *left, *right;
};

int arr[INT32_MAX];

void arrImp(struct Node *root, int pos)
{
    arr[pos] = root->key;

    arrImp(root->left, 2*pos +1);
    arrImp(root->right, 2*pos +2);
}

int calNodes(struct Node *root)
{
    int numNodes;
    return numNodes;
}

void solve()
{
    struct Node *root;
    int pos = 0;
    int numNodes = calNodes(root);
    arrImp(root, pos);
}