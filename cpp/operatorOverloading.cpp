#include<iostream>
#include<stdlib.h>
using namespace std;

class Time{
   int h;
   int m;
   int s;
public:
  Time(int h,int m,int s):h(h),m(m),s(s){

  }
  Time(){}
   Time operator>(Time); 
   void showData(){
           cout << "Hr "<<h << " Min " <<m <<" Sec " << s;
   }



};

  Time Time::operator>(Time t){
       Time temp;
       if(h > t.h){
        temp.h  = h;
        temp.m  = m;
        temp.s = s;
        return temp;
       }
       else{
         temp.h  = t.h;
        temp.m  = t.m;
        temp.s = t.s;
         return temp;
       }
  }


int main(){
    Time t1(2,3,4),t2(3,4,5);
    Time t3;
    t3 = t2 > t1;    
    t3.showData();

}
  