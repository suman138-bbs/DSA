#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
  node *left;
  int item;
  node *right;
};

class BST
{
private:
  node *root;

public:
  BST();
  BST(BST&);
  bool isEmpty()
  {
    if (root == NULL)
    {
      cout << "BST is Empty" << endl;
    }
    else
    {
      cout << "BST isn't empty" << endl;
    }
  }

  void insert(int val)
  {
    node *t = NULL;
    node *p = NULL;
    node *temp = new node;
    temp->item = val;
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
      root = temp;
    }
    else
    {
      node *t = root;
      while (t)
      {
        if (val < t->item)
        {
          p = t;
          t = t->left;
        }
        else
        {
          p = t;
          t = t->right;
        }
      }

      if (val < p->item)
      {
        p->left = temp;
      }
      else
      {
        p->right = temp;
      }
    }
  }
};

BST::BST()
{
  root = NULL;
}
//BST b2(b1)
BST::BST(BST &B){

}
// BST::~BST(){
//   delete temp;
// }