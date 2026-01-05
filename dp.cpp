#include<iostream>
using namespace std;
int main()
{

int m=10 ,n=20, cnt = 0;
int* *ptr=  new int* [10];
for(int i=0;i<m;i++)
{    ptr[i]  = new int[20];
 for(int j=0;j<n;j++)
 {  
     // cout << ptr[i][j] <<endl;
      cnt = cnt+1;
 }
}
cout << cnt << endl;


}

