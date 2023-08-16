#include<stdint.h>
#include<iostream>
using namespace std;
class Stack
{
private:
   int capacity;
   int top;
   int *ptr;
    
public:
    Stack();
    Stack(int);
    ~Stack();
};

Stack::Stack()
{
    ptr=NULL;
    top=-1;
}

Stack::Stack(int cap){
    capacity=cap;
    ptr=new int[]



}

Stack::~Stack()
{
}
