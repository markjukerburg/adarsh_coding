#include<iostream>
using namespace std;
#include "Complex.cpp"

int main()
{
 int real1,imag1,real2,imag2;
cin >> real1;
cin >> imag1;
cin >> real2;
cin >> imag2;
Complex c1(real1,imag1);
Complex c2(real2,imag2);

int choice;
cout << "enter the chioce either 1 or 2" << endl;
cin >> choice;
   if(choice  == 1)
   {
      c1.plus(c2);
      c1.print();

   }

  else if(choice==2)
  {

      c1.multiply(c2);
      c1.print();

  }
  else
  {
   //return 0;
   cout << "haukath dek teri gandu bola hena sirf  dho  choice hay  either 1 or  2"<< endl;
   return 0; 
  }



}




