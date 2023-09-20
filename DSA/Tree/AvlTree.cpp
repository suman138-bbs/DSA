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

    void leftRotation(){
        
    }
};

AVL::AVL()
{
    root=NULL;
}

AVL::~AVL()
{

}
