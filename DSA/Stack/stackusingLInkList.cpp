#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
    node *prev=NULL;
    int item;
    node *next=NULL;
};
class Stack
{
private:
  node *top;
public:
    Stack(){
        top=NULL;
    };
    
    void push(int val){
       node *ptr = new node;
       top->item = val;
       if(top==NULL){
            top= ptr;
       }
       else{
        ptr->prev=top;
        top->next=ptr;
        top=ptr;     
    }
 }

  void pop(){
      
      node *temp =  top;
      if(top->prev!=NULL){
         top = top->prev;
         delete temp;

      }
      else{
           delete temp;
      }
     
  } 
    // void showLink(){
        
    //     while(top->prev!=NULL){
    //         node *t=top;
    //         cout <<t->item;
    //         t=t->prev;
            
    //     }
    // }

       
    Stack(Stack &S){
       node *temp = new node;
       top = ;
       while(S){
            
       }
    }

//     void operator=(Stack S){
//          ptr =new int[S.capacity];
//         for(int i=0;i<capacity;i++)
//             {
//                 ptr[i]=S.ptr[i];
//             }  
//         delete []S.ptr;    

//     }
//     ~Stack();
 };

// Stack::Stack()
// {
//     ptr=NULL;
//     top=-1;
// }

// Stack::Stack(int cap){
//     capacity=cap;
//     ptr=new int[capacity];
//     top = -1;



// }



Stack::~Stack()
{
    delete top;
}


int main(){
    Stack s1;

    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(8);
    // s1.showLink();
}