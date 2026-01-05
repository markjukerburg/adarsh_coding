#include<iostream>
using namespace std;
//keeping the first index value of array outside of an arrray;(i.e staring from 1 to size-10);
int find_count2(int *a,int size,int x,int *out)
{
//if array size is zero then fuck that array by returning 0
    if(size == 0)
    {
    return 0;
    }
// gives count of element x;
int cnt  = find_count2(a+1,size-1,x,out);
//if first element in array is x then shift one in output array and update the value in output  array by incrementing by one
if(a[0] == x)
{
   for(int i=cnt-1;i>=0;i--)
               {
         out[i+1]=out[i]+1;
               }
out[0]= 0;
cnt++;
}
//if first element is not an array then just update the output array by increment value in that array;
else
{  for(int i=cnt-1;i>=0;i--)
     {
     out[i] = out[i]+1;
     }
}
//return the total count of given element x;
return cnt;
}


//finding the indices of the value x keeping the last index value outside (i.e from starting from a to size-2);
int find_count(int *a ,int size,int x,int *out)
{
  if(size ==0){
  return 0;

  }

  int cnt1 = find_count(a,size-1,x,out);
   int last_I = size-1;
  if(a[last_I]==x)
  { 
   out[cnt1] = last_I;
   cnt1++;
  }

return cnt1;

}



int find_all(int *a,int size,int x)
{  

    //creating output array to store the all indices of element x; 
    int * out  = new int [size];
    int n = find_count(a,size,x,out);
    cout <<"cnt = " << n << endl;
    //displaying all the indices in the output array;
    for(int j =0;j<n;j++)
    {  
        cout << out[j]<< endl;
    }
  

}
int main()
{ 
  int size;
  cout << "enter the size"<< endl;
  cin >> size ;
  //creating the array dynamically to store value of size "size";
  int *a = new int [size];
  int x; 
  cout << "enter the element to find its all indices" << endl;
  cin >> x;
  //accepting input value array "a" to find out indices;
  cout << "enter the value for array" << endl;
  for(int i=0;i<size;i++)
  {
 
      cin >> a[i]; 
  }
//calling the function find_all to create output array and further this fucntion call fucntion_count to get all the indices count 
find_all(a,size,x);
//delete the dynamic memeory array "a" due to  memory leak;
delete [] a;
}




