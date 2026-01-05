#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n = 3;

for(int i = 0; i<(1<<n);i++)
{

vector<int> subset;
for(int j = 0 ;j<n;j++){

    if(i&(1<<j))
        subset.push_back(i);


}



for(auto u :subset)
{
cout << u << endl;
}
}
}
