#include<stab.h>
#include<iostream>
using namespace std;

struct node{
    node *left;
    int item;
    node *right;

};
class BST{
private:
 node *root;
    
public:
    BST();
    ~BST();

    bool isEmplty(){
        if(root) return true;
        return false;
    }

    void insert(int val){
         node *temp  = new node;
         temp->item= val;
         temp->left= NULL;
         temp->right= NULL;
        if(root==NULL){
            root=temp;
        }
        else{
            node*t = root;
            node *flag=root;
            while(t){
                if(t->item > temp->item){
                    flag=t;
                    t=t->left;
                }
                else{
                    flag=t;
                    t=t->right;
                }

            }
            if(flag->item > temp->item){
                flag->left=temp;
            }
            else{
                flag->right=temp;
            }
        }
    }

    void deleteNode(int val){
        node *t= root;
        node *p = root;
        while(t->item!=val){
            if(t->item > val){
                p=t;
                t=t->left;
            }
            else{
                p=t;
                t=t->right;
            }
        }
        // if the value situated on the leaf node
        if(p->left->item==val){
            delete t;
            p->left = NULL;
        }
        else{
            delete t;
            p->right = NULL;
        }

        // single child
        



}
};

BST::BST()
{
    root=NULL;
}

BST::~BST()
{
}
