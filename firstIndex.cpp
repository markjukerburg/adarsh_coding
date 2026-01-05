#include<iostream>

using namespace std;
int  firstIndex(int arr[],int size,int x){


if(arr[0]==x){
return 0;
}
int ans = firstIndex(arr+1,size-1,x);
if(ans){

return ans+1;
}


}


int main(){

int arr[] = {1,3,4,5,8,9};
 int x = 8;
 int size = 6;
 int ans = firstIndex(arr,size,x);
cout << ans << endl;
}
