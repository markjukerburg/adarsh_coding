#include<iostream>
using namespace std;
int coin_change(int n,int*d, int numD,int** output)
{

if(n==0)return 1;
if(n<0) return 0;
if(numD == 0)return 0;    
if(output[n][numD] >-1)
       {
               return output[n][numD];
       }
   int first =   coin_change(n-d[0],d,numD,output);
   int second =   coin_change(n,d+1,numD-1,output);
    output[n][numD]    = first+second;
      return output[n][numD];
}
int main()
{
   int d[3]  = {1,2,3};
  int numD=3;
  int n = 3;
  int** output = new int*[n+1];
  for(int i = 0;i<n+1;++i)
  {
      output[i] = new int[numD+1];
      for(int j =0 ;j<numD+1;j++)
      {
          output[i][j] = -1;
    }
}
int res =  coin_change(n,d,numD,output);
cout << res <<endl;
for(int  i =0;i<n+1;i++)
{
    delete output[i];
}



delete [] output;

}



