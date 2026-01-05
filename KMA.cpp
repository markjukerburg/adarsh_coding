#include<iostream>
#include<vector>
using namespace std;

void computeArray(char *pat,int m,int *lps)
{ 
  int len = 0;
  lps[0] = 0;  
   int i=1;
  while(i<m)
  {
    if(pat[i]== pat[len])
    {
      len++;
      lps[i] = len;
      i++;

    }
    else
    {
        if(len!=0)
        {
           len = lps[len-1];

        }
        else
        {
            lps[i] = 0;
            i++;
        }
    }

  }
}

int   KMP(char *text,char * pat)
{
int cnt = 0;
int m = strlen(pat);
int n = strlen(text);
int lps[m];
computeArray(pat,m,lps);
int i=0,j=0;
while(i<n)
   {
     if(text[i] == pat[j])
     {
         i++;
         j++;
     }
   if(j == m)
  {
     // cout << "pattern found at position"<< " " << i-j <<endl;
      j = lps[j-1];
      cnt+=1;
  }
  else if( i<n && pat[j]!=text[i])
  {

      if(j!=0)
      {
      j = lps[j-1];
      }
      else
      {
      i = i+1;
      }
  }
}
return cnt;
}
int main()
{

    vector<char> text;
	vector<char> pat;
    cin >> pat;
    cin >> text;
	int res = KMP(text,pat);
    cout <<res << endl;
	return 0; 
}

