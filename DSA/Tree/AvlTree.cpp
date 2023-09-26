#include<iostream>
#include<stdio.h>
using namespace std;

struct node{
    node *left;
    int item;
    node *right;
    int height;
};

class AVL
{
private:
   node * root;
public:
    AVL();
    ~AVL();

    node* searchNode(int val){
        node *t =root;
        while(t->item!=val){
            if(t->item > val){
                t=t->left;
            }
            else{
                t=t->right;
            }

        }
        return t;

    }

    int getBalanceFactor(int no){
        node *temp = searchNode(no);
        int hr = temp->left->height+1;
        int hl = temp->left->height+1;
        return hr-hl;

        
    }

    // void leftRotation(){
        
    // }

    void insert(int val){
          node *t = root;
          node *p = root;
          node *temp = new node;
          temp->item=val;
          temp->left  =NULL;
          temp->right  =NULL;
          temp->height = 0;

          if(root==NULL){
            root=temp;
          }
          t=root;
          while(t){
            if(t->item > val){
                p=t;
                p->height++;
                t=t->left;
                
            }
            else{
                p=t;
                p->height++;
                t=t->right;
                
            }

          }
          if(p->item >val){
            p->left = temp;
          }
          else{
            p->right = temp;
          }
    }
};

AVL::AVL()
{
    root=NULL;
}

AVL::~AVL()
{

}
