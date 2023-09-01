#include<stdint.h>
#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;

};

class Queue
{
private:
    node *ptr;
    node *front;
    node *rear;
public:
    Queue():ptr(NULL),front(NULL),rear(NULL){}
    ~Queue(){
        delete ptr;
        
    }

    Queue(Queue &Q){
         ptr=new node;
         node *t=Q.ptr;
         while(t->next!=NULL){
            insertElement(t->item);
            t=t->next;
         }
    }
    
    void insertElement(int val){
        node *temp = new node;
        temp->item=val;
        temp->next=NULL;
        
        
        if(ptr!=NULL){
            node*t=ptr;
            ptr=temp;
            temp->next = t;
            rear=temp;
            // while(front->next!=NULL){
            //     front=front->next;
            // }
            
        }
        else{
            ptr=temp;
            front=ptr;
            rear =  ptr;

        }
        
    }

    int viewRear(){

       return rear->item;
    }
     int viewFront(){

       return front->item;
    }

    void deleteNode(){
        node *t=ptr;
        while (t->next->next=nullptr)
        {
            t=t->next;
        }

        delete t->next;
        t->next=nullptr;
    }

};
