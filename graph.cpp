#include<stdc++.h>
#define max 50
using namespace std;
class edge
{
    public:

    string sVertex;
    string eVertex;
    int weight;

};

void print(edge* a,int size)
{

    for(int  i =0 ; i<size;i++)
    { 

cout << a[i].sVertex << "-" << a[i].eVertex << "->" << a[i].weight<< endl;

    }

}

int main()
{

  int size = 5; 
  edge *a  = new edge[max];
     a[0].sVertex = 'a';
     a[0].eVertex = 'b';
     a[0].weight = 34;
  // 
     a[1].sVertex = 'b';
     a[1].eVertex = 'c';
     a[1].weight = 23;
   //
     a[2].sVertex = 'c';
     a[2].eVertex = 'a';
     a[2].weight = 13;
  //
     a[3].sVertex = 'd';
     a[3].eVertex = 'c';
     a[3].weight = 13;
//
     a[4].sVertex = 'd';
     a[4].eVertex = 'a';
     a[4].weight = 45;

 

  print(a,size);

}



