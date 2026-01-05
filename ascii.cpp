#include<iostream>
using namespace std;
int main()

{ 
  string   str = "C";
  for(int i=0;str[i]!='\0';i++)
  {
 

    for(int j=6;j>=0;j--)
    {



     int bit  =   int(str[i])>>j&1;
    
cout << bit;
    }

}
}
