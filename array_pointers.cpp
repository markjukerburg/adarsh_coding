#include<iostream>
using namespace std;
int main(){


int a[10];

//cout << a << endl;
//cout << &a[0] << endl;

a[0] = 7;
a[1] = 9;
a[3]=12;
int *p = &a[0];
//a is pointing to starting address and *a is value of starign address
//cout << *a << endl;
//cout << *(a+2)<< endl;
//cout << a << endl;
//cout << p << endl;
//cout << &p << endl;
cout <<"pointer ka " << sizeof(p) << endl;
char  f = 'c';
char  *pt = &f;
cout << f << endl;
cout << pt << endl;

cout << "array ka"<< sizeof(a) << endl;
}



