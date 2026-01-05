#include<iostream>
#include<deque>

using namespace std;


int main()
{
deque<int> d;
d.push_back(5);
d.push_back(4);
d.push_back(1);
d.pop_back();
d.push_front(1);
d.push_front(3);
d.pop_front();
for (auto a : d) 
cout << a<< endl;

}


