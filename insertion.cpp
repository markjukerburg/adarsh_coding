#include<iostream>
using namespace std;
int in_sort(int *a,int size)
{

for(int i = 1;i<size;i++)
  {
    int key = a[i];
    int j = i-1;

/*      while(j>=0 && a[j] > key)
      {
          a[j+1] = a[j];
           j = j-1;
      }

   a[j+1] = key;
*/

for(;j>=0 && a[j]>key;)
{

    a[j+1] = a[j];
      j--;
}
a[j+1] = key;
  }
}

int main()
{
int size ;
cout << "enter the size of an array:" << endl;
cin >> size;
int *arr = new int[sizeof(int)*size];
cout << " enter the elements to sort" << endl;
for(int i = 0 ;i<size;i++)
{
cin >> arr[i];
}
in_sort(arr,size);
cout << "elements after sorting:" << endl;
for(int j = 0 ;j<size;j++)
 {
 cout<< arr[j]<< endl;
 }

}
