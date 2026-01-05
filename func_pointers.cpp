#include<iostream>
using namespace std;
void print(int *p){
cout << "value of "<<*p <<endl;

}
void inc(int *p){
    (*p)++;
}

int main(){

int i =10;
int *p = &i;
//print(p)
cout << *p << endl;
inc(p);
cout << *p << endl;
}





