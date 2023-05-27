#include<iostream>
using namespace std;
void f1(int *,int );
int main(){
    int a[5];
    cout << "Enter an array";
    for(int i=0;i<6;i++){
        cin >> a[i];
    }
    for(int i=0;i<6;i++){
        cout << a[i] << " ";
    }
    f1(a,5);
  return 0;
}

void f1(int *p,int s){
  p[3]=900;
  cout <<"Inside Function" <<endl;
  for(int i=0;i<6;i++){
    
        cout << p[i] << " ";
    }

}
