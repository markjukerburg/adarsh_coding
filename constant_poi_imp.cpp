#include<iostream>
using namespace std;
int main()
{
int i = 10;
int j = 21;
//1
int const *p = &i;
//cout << *p << endl;//pointer is not declared as const and here int memory is const so  we cant cahnge the value i in memory;
//but does not change value of the poited variable because value in memeory is const.
p = &j;

//(*p)++;this not possible memeory is const;
//cout << *p << endl;

//2
int * const p2 = &i;//here we declared pointer as constant not where is pointing (i.e we change value of i in memory)

(*p2)++;
cout << *p2 << endl;
//p2 = &j;  this not possible beacue p2 is const

//3 
int const * const ptrr = &i;
//ptrr = &j;
//(*ptrr)++;both are not possible because of both is const

}
