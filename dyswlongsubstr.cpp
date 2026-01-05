#include<iostream>
#include<set>
using namespace std;

int lonSubStr(string baseStr){
 int left = 0;
 int right = 0;
 set<int> hashset;
 int maxLen = 0;

 while(right < baseStr.length()){
    while(hashset.count(baseStr[right]) ){
        hashset.erase(baseStr[left]);
        left+=1;
  }
    maxLen = max(maxLen , right-left+1);
    hashset.insert(baseStr[right]);
    right+=1;
 }
   
return maxLen;



}


int main(){

cout << lonSubStr("abcdfbab")<< endl;

}
