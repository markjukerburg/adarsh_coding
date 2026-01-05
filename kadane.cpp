#include<iostream>
using namespace std;

int kadane(int *arr,int n)
{  
  int sum = 0;
    int best = 0;
   for(int i = 0;i<n;i++)
   {
        sum   = max(arr[i],sum+arr[i]);
         best = max(best,sum);

}
return best;
}
int main()
{
 //int n = 5;
  int arr[5] = {1,-2,3,4,-1};
 int ans =  kadane(arr,5);
cout << ans << endl;
}
