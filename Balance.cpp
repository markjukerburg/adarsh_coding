#include<iostream>
using namespace std;
#include<stack>

int check_bal(string str);
int  main()
{

string str = "[a+(b-c)+d";
int  res = check_bal(str);
cout << res << endl;
}
 
int  check_bal(string str)
{
stack<char> s;
//string  str1 = "{a+[b-(c*d)]+9}";
//string str = "[a+(b-c)+d";
for(int i=0;str[i]!='\0';i++)
{

 if(str[i]== '{' || str[i] == '(' || str[i] == '[')
 {

   s.push(str[i]);
  //cout << s.top() << endl;

 }
 else if((str[i] == '}'&& s.top() == '{')) 
   {
      s.pop();
      continue;
      // cout << s.top() << endl;
   } 
 else if(( str[i] == ')' && s.top() == '('))
  {
  s.pop();
  continue;
  }
 else if(( str[i] == ']' && s.top() == '[') )
  {
  s.pop();
  continue;
  }
 continue;
 
}

if( s.empty())
{
   return 1;
   // cout << "TRUE" << endl;
}
else
{  return  0;
    //cout << "FALSE" << endl;

}

}
