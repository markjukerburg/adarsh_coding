#include<iostream>
#include<cmath>
using namespace std;
int nextDigit(int x);
bool isHappy(int x);

// solved using fast and slow pointer.
bool isHappy(int x){

    int slow = x;
    int fast = x;
    while (true) {
       slow = nextDigit(slow);
       fast = nextDigit(nextDigit(fast));

      // cout << fast << endl;
      if(fast ==1){
         return true;
       }
      else if(fast ==slow){
   return false;

   }

}

}


int nextDigit(int x){
    int digit;
    int nextDigit= 0;

    while( x >0){
        digit = x%10;
        x = floor(x/10);
        nextDigit+=pow(digit,2);
}

return nextDigit;


}




int main(){


int x = 6;
//cout << nextDigit(10)<< endl;
cout << isHappy(x)<< endl;

}
