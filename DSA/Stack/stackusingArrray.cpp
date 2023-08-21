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
    void push(int val){
        top++;
        ptr[top] = val;
    };
    void pop(){
        top--;
    } 

    bool overflow(){
        if(top+1==capacity)
        return true;
        else return false;
    }
     bool underflow(){
        if(top==-1)
        return true;
        else return false;
    }

    Stack(Stack &S){
        ptr =new int[S.capacity];
        for(int i=0;i<capacity;i++)
            {
                ptr[i]=S.ptr[i];
            }  
        delete []S.ptr;    
    }

    void operator=(Stack S){
         ptr =new int[S.capacity];
        for(int i=0;i<capacity;i++)
            {
                ptr[i]=S.ptr[i];
            }  
        delete []S.ptr;    

    }
    ~Stack();
};

Stack::Stack()
{
    ptr=NULL;
    top=-1;
}

Stack::Stack(int cap){
    capacity=cap;
    ptr=new int[capacity];
    top = -1;



}



Stack::~Stack()
{
    delete []ptr;
}
