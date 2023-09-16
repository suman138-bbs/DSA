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
};

AVL::AVL()
{
    root=NULL;
}

AVL::~AVL()
{
}
