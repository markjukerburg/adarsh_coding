#include<iostream>
#include<vector>
using namespace std;

int florida(vector<int>& Treasure)
{

    int nMons;
    cin >> nMons;
   for(int i=0;i<nMons;i++)
   { 
     int nCoins;
      cin>>nCoins;
     Treasure.push_back(nCoins);

   }
 vector<int> d(nMons);
 d[0] = Treasure[0];
 d[1] = max(d[0],Treasure[1]);
  
 for(int i = 2;i<nMons;i++)
 {

      d[i] =  max(d[i-1],Treasure[i]+d[i-2]);

 }



 return d[nMons-1];        




}


int main()
{

vector<int>Treasure;
int n =florida(Treasure);
cout << n << endl;
}


