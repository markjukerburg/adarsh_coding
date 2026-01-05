#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int findInsertionIdx(vector<int> arr , int target){
 int left  = 0;
 int mid;
 int right = arr.size();
  while( left < right){

     mid = floor((right+left)/2);
     if(arr[mid]>=target){
      right  = mid;

     }
     else if(arr[mid]< target){
       left = mid+1;

     }


  }
return left;

}




int main(){
vector<int> arr ;

arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(5);
arr.push_back(6);

cout << findInsertionIdx(arr,4)<< endl;

}
