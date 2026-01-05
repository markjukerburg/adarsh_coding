#include<iostream>
using namespace std;

int main(){

int x = 28;


for(int i=31;i>=0;i--){

  //int res = x&(1<<i);
  int res = (i>>1)&x;
  //cout << i << endl ;
   cout << res<< endl;



}



}

