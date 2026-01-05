#include<iostream>
#include<unordered_map>

using namespace std;


int main()
{
string  s2 = "aba";
  unordered_map<char,int> hmap;


  for(int i =0 ;s2[i]!='\0';i++)
  {



     if(hmap[s2[i]])
     {

         hmap[s2[i]] +=1;
     }
   else
   {

   hmap[s2[i]] = 1;

   }




  }
  for(auto x:hmap)
  {

      cout << x.first << x.second << endl;
  }



}


