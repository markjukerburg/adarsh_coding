#include<iostream>
using namespace std;

long long  merge(int *arr,int si,int mid,int ei);
long long mergeSort(int *arr,int si,int ei)
{ 
long long count = 0;
 if(ei>si)
     {
int mid = si+(ei-si)/2;
//left sub     
long long countLeft = mergeSort(arr,si,mid);

//right sub
long long countRight = mergeSort(arr,mid+1,ei);   
long long myCount = merge(arr,si,mid,ei); 
     return countLeft+countRight+myCount;
     }
return count;
}

long long  merge(int *arr,int si,int mid,int ei)
{   
    int cnt=0;
    int leftLen = mid+1;
    //int rightLen = ei-mid;
    int temp[ei-si+1];
    int i = si;
    int j = mid+1;
    int k=0;
    int localCount=0;
    while(i<=mid && j <= ei)
    {
        if(arr[i] > arr[j])
                {
                cnt+=leftLen-i;
                temp[k++] = arr[j++];

                }
         

       else{
            temp[k++] = arr[i++];
            }
     }

  while(i<=mid)
  {

  temp[k++] = arr[i++];
  }
  while(j<=ei)
  {
      temp[k++] = arr[j++];
  }

for(int i = si;i<=ei;i++)
{

    arr[i] = temp[i-si];

}
//cout << "count is"<< cnt << endl;
return cnt;
}
int main()
 {
  int * arr  = new int [100];
  int size;
  cout <<"enter the size of an array" << endl;
  cin >> size ;
  int si = 0;
  int ei = size-1;
  cout << "enter the elements to sort" << endl;
  for(int i=0;i<size;i++)
  {
      cin >> arr[i];
  }
// int start = getTime();
 long long out= mergeSort(arr,si,ei);
 //int end = getTime();
 cout << "out"<<out <<endl;
 
 delete [] arr;
 }



