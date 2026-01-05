#include<iostream>
using namespace std;
int main(){
// constant int declare
const int i= 10;
int const i2 = 10;
// constant refernce from a non const int
int j = 12;
const int & k = j;
//k++; this not possible this path to memory containing 12 is constant
j++;
cout << j << endl;
//constant refernce from const int
int const j2 = 12;
int const &k2 =j2;
//reference from a const int
int const j3 = 123;
int &k3  = j3;
k3++

}
