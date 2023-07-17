#include<stdio.h>
#include<iostream>
using namespace std;

struct node{
    int item;
    node *next;
};

class SLL{
   private:
    node *start;

    public:
      SLL(){
        start = NULL;
      } 

      SLL(node  ){

      }
    void insertAtStart(int value){
          node *temp = new node;
          temp->item = value;
          temp->next = NULL;
          if(start==NULL){
            start = temp;
            delete temp;
          }
          else {
            temp->next = start;
            start  = temp;
            delete temp;
          }

    }

   void insertAtLast(int value){
        node *t = start;
        node *temp = new node;
        temp->item = value;
        temp->next = NULL;
        
        while(t->next){
          t=t->next;

        }

        t->next=temp;
        delete temp;
        

   } 
     

   
};
