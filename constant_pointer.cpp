#include<iostream>
using namespace std;


int f(int * p){
(*p)++;
}

// this const reference where we cant modify the value of memeory;
int g(const int & i){
i++;

}
int main()
{
int  a = 23;
int *p12 = &a;
//f(p12);
g(a);
cout<< a << endl;
   
const int i =10;

//int *p = &i;it gives erros pointer cant point const memeory
int const *p = &i;
//*p = 19;red only memeory is not assinable;
//cout << *p <<endl;
int j =45;// it has both r and w acces;
const int *p3 = &j;// it has only read acces;
cout << *p3 << endl;//displaying the value of j which is referenced by pointer p3;
j++;//incrementing value of j
cout << *p3 << endl;//print the value of j after incr;

}


