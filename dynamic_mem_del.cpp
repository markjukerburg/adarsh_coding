#include<iostream>
using namespace std;

int main()
{

int *p = new int ;
cout << p << endl;

delete p;
cout << p << endl// it will delete pointer but memory in heap is deleted;poinetr is presented on stack
 int *p1 = new int[100];

 delete [] p1;
}




