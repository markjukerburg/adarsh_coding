#include<iostream>
using namespace std;

class Fraction
{
    private:
        int  num;
        int  deno;
    public:
     Fraction ()
     {
     }
 Fraction(int   num,int deno)
   {
    this->num = num;
    this->deno = deno;
   }
int getNum() const 
{
 return num;
}
int getDeno() const
{
 return deno;

}
void setNum(int n)  
{ 
num = n;
}

void setDeno(int d)  
{

deno = d;

}


public:

void simply()
{   int gcd = 1;
    int j = min(this->num,this->deno);
    for(int i=1;i<j;i++)
    {
      if((this->num)%i==0 && (this->deno)%i==0)
      {

     gcd = i;
      }
    }
this->num =this->num/gcd;
this->deno =this->deno/gcd;
    
}


Fraction  add(Fraction const  &f2)
{
   //int  k = ++(f2.deno);
//cout << "value of k" << k << endl;
int  lcm = this->deno*f2.deno;

int  x = lcm/this->deno;
int   y = lcm/f2.deno;
int  num1 = (x*this->num+y*f2.num);
int deno1 = lcm;

// we can use this->num in place num;
    //num = num1;
//we can use this-deno in place deno;
   // deno = deno1;
Fraction Fnew(num1,deno1);

Fnew.simply();
return Fnew;;

}
Fraction  operator+(Fraction const  &f2) const {
    //int  k = ++(f2.deno);
 //cout << "value of k" << k << endl;
 int  lcm = deno*f2.deno;

 int  x = lcm/deno;
 int   y = lcm/f2.deno;
 int  num1 = (x*num+y*f2.num);
 int deno1 = lcm;

 // we can use this->num in place num;
     //num = num1;
 //we can use this-deno in place deno;
    // deno = deno1;
 Fraction Fnew(num1,deno1);

 Fnew.simply();
 return Fnew;;

 }

//operator overloading

 Fraction  operator*(Fraction const  &f2) const 
 {
 
   // int num = this->num / this->deno;  
   // int deno  = f2.num/f2.deno;
   // int ans =     num *deno;
   int  num1 = num * f2.num;
    int deno1 = deno * f2.deno;
 
     
   Fraction fnew(num1,deno1);


   fnew.simply();
 return fnew;
 
 
 
 }

bool operator==(Fraction const &f2) const 
{ 
   return  ( num == f2.num && deno == f2.deno );


}



void multiply(Fraction const  &f2)
{  

  // int num = this->num / this->deno;  
  // int deno  = f2.num/f2.deno;
  // int ans =     num *deno;
   num = this->num * f2.num;
   deno = this->deno * f2.deno;

    simply();




}







void display()
{
//cout << "simplied answer is" << endl;
cout << this->num <<" " <<  this->deno << endl;

}


void print() const
  {

  cout << this->num <<"/" <<this->deno<< endl;

  }


Fraction & operator++(){
num = num+deno;
//Fraction fnew(num,deno);
//fnew.simply();
//return fnew;

return *this;
}


Fraction operator++(int)
{
    Fraction fnew(num,deno);
    num = num+deno;
    simply();
    fnew.simply();
    return fnew;
}

//here we given reference to function so that it will update value in this* without using any buffer;
Fraction&  operator+=(Fraction const &f2)
{

 int  lcm = deno*f2.deno;
 
 int  x = lcm/deno;
 int   y = lcm/f2.deno;
 int  num1 = (x*this->num+y*f2.num);
num = num1;
deno = lcm;
simply();
return *this;


}



};

