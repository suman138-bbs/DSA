#include<stdint.h>
#include<iostream>
using namespace std;
class Queue
{
private:
    int capacity;
    int front;
    int rear;
    int *ptr;
public:
    Queue():capacity(capacity){
        ptr = new int[capacity];
        front = -1;
        rear = -1;


    }

    Queue(Queue &S){
        capacity = S.capacity;
        ptr =new int[capacity];
    }

    void insert(int val){
        if(front==-1){
             front++;
             ptr[front]=val;
         }
        if(capacity==rear+1){
            cout << "Queue Overflow"<<endl;
        }
        if(front==0 && rear+2!=capacity){
              rear++;
              ptr[rear] = val;

        }
        if(rear+2!=capacity){
            rear++;
            ptr[rear];
        }
        if(front>0 && rear+1==capacity){
           rear=0;
           if(rear+1!=front){
            ptr[rear]=val;
            rear++;
           }
           else{
            cout <<"Queue Is Full";
           }
        }
        
    }

    void showrear(){
        cout <<"The rear element"<< ptr[rear]<<endl;
    }

    void showfront(){
        cout<<"The front element"<<ptr[front]<<endl;
    }
    void deleteFront(){
       front++;
    }

    bool underFlow(){
        if(front==-1){
            return true;
        }
        else return false;
    }

    // int numberOfELement(){
    //     int count=0;
    //     if(front<rear){
    //     for(int i=front;i<=rear;i++){
    //         count++;
    //     }
    //     }
    //     else{
    //         for(int i=front;i<rear;){
    //             count++;
    //             if()
    //         }

    //     }
    }
    ~Queue(){

    }
};
