#include<iostream>
using namespace std;
// int f1(int *,int );
// int main(){
//     int a[5],index;
//     cout << "Enter an array";
//     for(int i=0;i<6;i++){
//         cin >> a[i];
//     }
   
//     index=f1(a,5);
//     cout <<"Index of number:"<< index;
//   return 0;
// }

// int f1(int *p,int s){
//    int n=6;
//    for(int i=0;i<6;i++){
//     // cout  << endl <<p[i];
//         if(p[i]==n){

//          return i;
//         }
// }
// }

// Print Extreme in array
int main(){
  int a[]={1,2,3,4,5,6,7};
  int last = sizeof(a)/sizeof(int);
  last =last-1;
  for(int i = 0;i <=last/2;i++){
    cout <<a[i] << a[last-i];
  }
  return 0;
  
}


