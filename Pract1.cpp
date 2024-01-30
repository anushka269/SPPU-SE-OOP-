#include<iostream>
using namespace std;
class complex
{
 int real,imag;
 public:
     complex()
     {
      real=0;
      imag=0;
      }

 complex operator +(complex b)
 {
 complex b1;
 b1.real=real+b.real;
 b1.imag=imag+b.imag;
 return(b1);
 }
complex operator -(complex b)
{
 complex b1;
 b1.real=real-b.real;
 b1.imag=imag-b.imag;
 return(b1);
 }
complex operator *(complex b)
{
 complex b1;
 b1.real=(real*b.real)-(imag*b.imag);
 b1.imag=(real*b.imag)+(imag*b.real);
 return(b1);
 }
 friend istream& operator >>(istream& is,complex& b);
 friend ostream& operator <<(ostream& os,complex b);

};
 istream& operator >>(istream& is,complex& b)
{
 cin>>b.real>>b.imag;
}
ostream& operator <<(ostream& os,complex b)
{
 cout<<b.real<<"+"<<b.imag<<"i"<<endl;
}


int main()
{
 int ch,ans;
 complex b2,b3,b4;
 cout<<"Choices are:\n1.Read first complex number\n2.Read second complex number \n3.Addition\n2.Subtraction\n3.Multiplication";
 do
 {
 cout<<"Enter your choice: ";
 cin>>ch;
 switch(ch)
 { 
   case 1:
        cout<<"\nEnter real and imaginary part of first complex number: ";
        cin>>b2;
        cout<<"\nFirst complex number is: ";
        cout<<b2;
        break;
  case 2:
        cout<<"\nEnter real and imaginary part of second complex number: ";
        cin>>b3;
        cout<<"\nSecond complex number is: ";
        cout<<b3;
        break;
      cout<<b4;
      break;
 }
 cout<<"\nEnter 1 for continue and 0 for stop: ";
 cin>>ans;
 
 }
 while(ans==1);
 if(ans==0)
 {
  cout<<"Calculation Stop!";
 }
 return(0);
}

   case 3:
       b4=b2+b3;
       cout<<"\nAddition is: ";
       cout<<b4;
       break;
   case 4:
       b4=b2-b3; 
       cout<<"\nSubtraction is: ";
       cout<<b4;
       break;
   case 5:
      b4=b2*b3;
      cout<<"\nMultiplication is: ";