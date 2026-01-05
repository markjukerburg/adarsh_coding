#include<iostream>
#include "Student.cpp"
using namespace std;
int main()
{
 Student s1;
 Student s2(12,40);


 Student s3(45,34);

 Student s4(s3);
 s1 = s2;
 Student s5 = s4;
// we cant init copy constructor;(Student s2 = new Student(s1));
//instead we can do this ;
 //s1  = s2;


 //Student *s3 = new Student(12,44);

//*s3 = s1;
//s2 = *s3;


s1.display();
s2.display();
s3.display();
s4.display();
s5.display();
//delete s3;

}


