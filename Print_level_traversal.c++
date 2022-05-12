#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data,
pointer to left child
and a pointer to right child */
class node {
public:
    int data;
    node *left, *right;
};

/* Function prototypes */
void printCurrentLevel(node* root, int level);
int height(node* node);
node* newNode(int data);

/* Function to print level
order traversal a tree*/
void printLevelOrder(node* root)
{

  if(root==NULL)
  {
    return;

  }
  int h=height(root);
  for(int i=1;i<=h;i++)
  {
    printCurrentLevel(root,i);
  }
}
void printCurrentLevel(node* root,int level)
{
     if(root==NULL)
     return ;
     if(level==1)
     cout<<root->data<<" ";
     else{
       printCurrentLevel(root->left,level-1);
       printCurrentLevel(root->right,level-1);
     }
}

int height(node* node)
{
    if (node == NULL)
        return 0;

        int lheight = height(node->left);
        int rheight = height(node->right);

        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }


node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

/* Driver code*/
int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);

    return 0;
}
