#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int findTarget(vector<int>  arr ,int target){

int left  = 0 ;
int right = arr.size()-1;
//cout << right << endl;
while (left < right)
{
   int  mid = (right+left)/2;
  //cout << (right) << endl;
  //cout << (left) << endl;
  // cout << mid << endl;
   if(arr[mid] == target){
                return mid;
            }

   else if(arr[left] <=arr[mid]){
       //cout << "called left "<< endl;
       if(arr[left]<= target  and target  < arr[mid]){

            right = mid-1;

            }
        else{
            left = mid+1;
            }
    }
   else{ 
    //   cout << "right called"<< endl;
       if(arr[mid] < target and  target <= arr[right]){
      //     cout << "this +1 in right" << endl;
        //   cout << target << endl;  
          // cout << arr[mid] << endl;
           left  = mid+1;
            }
    else{
        //cout << "this mid-1 in right " << endl;
         right = mid-1;
        }

        }
    }
//cout << arr[left];
left =  arr[left] == target? left :-1;
return left ;

    }



int main(){
vector<int> arr;
arr.push_back(8);
arr.push_back(9);
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);
arr.push_back(6);
arr.push_back(7);
//cout << arr.size()-1 << endl;
cout << findTarget(arr,1) << endl;
//cout << arr[0] << endl;
}
