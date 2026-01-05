#include<iostream>
using namespace std;

void incre1(int **p){
p = p+1 //it is not possible change or update address which is like adres
}
void incre2(int **p){
*p = *p +1;//it is possible 

}

void incre3(int ***p){
**p = **p+1;//True it is possible
}

int main()
{

int i=10;
int *p = &i;
int* *p2 = &p;
int**  *p3 = &p2;
cout <<&i<<endl;
cout<< p << endl;
cout<< &p << endl;
cout << p2 << endl;
cout << &p2 << endl;
cout << p3 << endl;
}
