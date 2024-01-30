#include<iostream>
#include<vector>
using namespace std;
class student()
{
 public:
 int i,ch,n,rollno,dob;
 double teleno;
 string name;
 void getdata()
 {
  cout<<"\nEnter the roll no. and name:";
  cin>>rollno>>name;
  cout<<"\nEnter the birthdate and telephone number:";
  cin>>dob<<teleno;
 }
 void putdata()
 {
  cout<<"\nROLL NO:"<<rollno;
  cout<<"\nNAME:"<<name;
  cout<<"\nBIRTHDATE:"<<dob;
  cout<<"\nTELEPHONE NUMBER:"<<teleno;
 }
};
vector<student> read()
{
 student s;
 vector<student>vec;
 cout<<"\nHow many student's data you want to enter?:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  s.getdata();
  vec.push_back(s);
 }
 return (vec);
}
int main()
{
 vector<student>v;
 do
 {
  cout<<"1.Create \n2.Display";
  cin>>ch;
  switch(ch)
  {
   case 1:
   {
    v=read();
    break;
   }
   case 2:
   {
    v=display();
    break;
   }
  }
 }
 
}
