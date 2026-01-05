class Complex
{

private:
     int real;
     int imag;
      
public:
     Complex(int real,int imag)
     {

     this->real = real;
     this->imag = imag;

     }


void plus(Complex const &c2)
{

  int real1 = this->real+c2.real;
  int imag1 = this->imag+c2.imag;
  
this->real = real1;
this->imag = imag1; 



}
void multiply(Complex const &c2)
{
   int real1 = this->real*c2.real;
   int imag1 = this->imag*c2.imag;
this->real = real1;
 this->imag = imag1; 
}


void print()
{
 
cout << this->real << "+" << this->imag << "i" << endl;

}

};
