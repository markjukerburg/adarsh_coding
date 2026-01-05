#include<stdc++.h>
using namespace std;
int main()
{
vector<tuple<int ,int,int> > edge;
/*edge.push_back({1,2,2});
edge.push_back({1,4,7});
edge.push_back({1,3,3});
edge.push_back({3,4,1});
edge.push_back({2,5,5});
edge.push_back({4,5,2});
*/

edge.push_back({1,2,3});
edge.push_back({1,3,5});
edge.push_back({2,3,2});
edge.push_back({2,4,1});
edge.push_back({3,4,-7});


int INF = INT_MAX;
int n  = 5;//vertex
int distance[5];
for(int i = 2;i<=n;i++)
{
    distance[i] = INF;
}
distance[1] = 0;
int l;//contains index of min path or min distance.
for(int i = 2;i<=n;i++)
{

for(auto e:edge)
{
 int a,b,w;
 tie(a,b,w) = e;
 distance[b] = min(distance[b],distance[a]+w); 
 l=b;//storing last index of  distance to varible l.
cout << distance[b] << endl;
}
cout <<"end"<< endl;
}
//cout << distance[l] <<endl;
}
