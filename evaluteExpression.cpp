#include<iostream>
#include<stack>
#include<cctype>
using namespace std;


int  eval_exp(string exp){
    int cur_num =0;
    int sign = 1;
    int res = 0;
    stack<int> list;
    for(auto ex : exp){
        //cout << ex <<endl ;
        if(isdigit(ex)){
            int valid_num  =ex-'0'; // ascii to number
            //cout << sum << endl;
            cur_num = cur_num*10+valid_num;
//            cout << cur_num << endl;
           
         }
        else if(ex == '+' or ex == '-'){
          res+=sign*cur_num;           
          sign =  ex=='-'?-1:1;  
          cur_num = 0;
           
            }

        else if(ex == '('){
            list.push(res);
            list.push(sign);
            res= 0;
            sign=1;
    }
       else{
         if(ex == ')'){
           res+=sign*cur_num;

           res*=list.top();
           list.pop();
           res+=list.top();
           list.pop();
          cur_num = 0;
          }
     

   }
  

 } //for ends here 

cout << res << endl;


return res+sign*cur_num;
}// function ends here 
 



int main(){

string str = "18-(7+(2-4))";
string st2 = "18+244";
string st3 = "28-10+7";
cout << eval_exp(st3)<< endl; ;


}
