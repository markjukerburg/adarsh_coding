#include<iostream>
#include<unordered_set>
using namespace std;


int  len(string str) {
       // string str = "abaabcbb";
        int n = str.length();
        int i=0,j=0,ans = 0;
        unordered_set<char> set;
    
        while(i<n && j < n)
        {        
         const bool is_in   = set.find(str.at(j)) != set.end();
             if(!is_in)        
            {  
                set.insert(str.at(j++));
                ans = max(ans,j-i);
                
            }
            
            else
            {
                //cout << "no" << endl;
                set.erase(str.at(i++));
                
            }
        }


return  ans; 

}
int main()
{
string str = "abcdbbb";
int res =     len(str);
cout << res << endl;
}


