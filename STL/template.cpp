#include<iostream>
#include"item.cpp"
using namespace std;

template<typename X>

X big(X a,X b){
    if(a>b){
        return a;
    }
    else return b;
}

int main(){
   cout << big(2,4) <<endl;
   cout << big(2.3,2.2) <<endl;
   Item i1,i2;
   i1.setData(2,3);
   i2.setData(3,3);
   (big(i1,i2)).shoWData();
   
  

}