#include<iostream>
using namespace std;
int main(){

    int m,n,q;
    cin >> m >> n >> q;
    int *** arr = new int ** [m];
    for(int i=0;i<m;i++){
        arr[i] = new int*[n];
        for(int j=0;j<n;j++){
            arr[i][j] = new int[q];
            for(int k=0;k<q;k++){
              cout << "Enter the Elements" << endl;
              cin >>  arr[i][j][k];
            
              cout <<"Allocated address"<< arr[i][j]<< endl;
    }

    }



    }
for(int i=0;i<m;i++){

for(int j=0;j<n;j++){
  cout << "deleted address" << arr[i][j] << endl;
  delete [] arr[i][j];

}

delete [] arr;}

}
