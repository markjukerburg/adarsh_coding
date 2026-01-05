#include<iostream>
#include<unordered_set>
using namespace std;


int main()
{
unordered_set<char> set;

string str = "abcabcbb";

if((set.find(str[1]) != set.end())==0 )    
{

 set.insert(str[1]);


}
cout <<( set.find('a')!= set.end() ) << endl;

}
