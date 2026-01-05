
#include<iostream>
using namespace std;
#include "DynamicArray.cpp"

int main()
{
DynamicArray d;
d.add(10);
d.add(20);
d.add(30);
d.add(40);
d.add(50);
d.add(60);

d.add(2,34);
DynamicArray d2;
d2=d;
d2.print();


}
