#include<iostream>
using namespace std;
int main(){
/*int *p = new int;
*p = 1000000000;
 cout << *p<< endl;
double *pd  = new double;
*pd =12348488585.88588588585858200;
cout << *pd<< endl;*/
//char *c  = new char;
//int *pa  = new int[50];
int n;
cout<< "enter the size of the array" << endl;

cin >>n;
int *pa2 = new int [n]; 
cout<< " enter the elements for the array" << endl;
for(int i= 0;i<n;i++)
{
cin>> pa2[i];    
    
}

int max = -1;

for(int i=0;i<n;i++)
{
  if(max < pa2[i])
    {
  
   max = pa2[i];

    }
}
cout << " maximum element is " <<max << endl;


}
