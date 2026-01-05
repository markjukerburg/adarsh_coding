#include<iostream>

using namespace std;
int fact(int n){
if(n==0)
{
return 1;

}

int small = fact(n-1);
int out = n*small;
return out;


}


int main(){
int n;
cin >> n;
cout << fact(n) << endl;

}




