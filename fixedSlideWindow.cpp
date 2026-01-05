#include<iostream>
#include<deque>
#include<vector>
using namespace std;





void fixedWindow(){
//vector<int> v = {2,4,2,5,1};
vector <int> data;

data.push_back(1);
data.push_back(2);
data.push_back(3);
data.push_back(4);
data.push_back(5);
const size_t WINDOW_SIZE = 3;

deque<int> window;


for(auto item : data){

window.push_back(item);


if(window.size() > WINDOW_SIZE){
window.pop_front();


}
double sum = 0;

for (auto v : window){sum+=v;}
double avg = sum/window.size();

cout << avg << endl;

  


} 





}



int main(){
fixedWindow();


}
