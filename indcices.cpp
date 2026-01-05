#include<iostream>
using namespace std;
int indices(int *a,int size,int x){
 if(size == 0)
  { 
 return -1;
  }
if(a[0] == x)
{
    return 0;
}
int ans = indices(a+1,size-1,x);
    
 if (ans == -1)
  {
   return -1;
  }
return ans+1;

}


int  main()    
{   int size=5; 
    int* a = new int [5];
     cout << "enter five elements" << endl;

    for(int j=0;j<size;j++)
    {
         
        cin >>  a[j];
    }
    int i =  indices(a,size,10); 
    cout << "starting indec is " << i << endl;



  delete [] a;
}
