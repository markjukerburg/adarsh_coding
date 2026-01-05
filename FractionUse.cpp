#include<iostream>
using namespace std;
#include "Fraction.cpp"

int main()
{

Fraction f1(10,2);
Fraction f2(15,4);

Fraction const f3;

cout << f3.getNum() << f3.getDeno() << endl;
//cout << f3.setNum(10) << f3.setDeno(23) << endl;

f3.print();


/* f1.add(f2);
 f1.print();
 f2.print();
 f1.multiply(f2);
f1.print();
f2.print();
*/}
