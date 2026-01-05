#include<iostream>

using namespace std;


int main()
{int n;

 cout << "Enter ther Size of Array" << endl;  
 cin >> n;
 int * arr  = new int [n];

 for (int i =0;i<n;i++){
  
  cin >> arr[i];
  cout << arr[i]<< endl;
 }    


}

