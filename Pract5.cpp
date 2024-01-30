#include<iostream>
using namespace std;
template<class T>
void selection(T arr[],int size)
{
 int i,j,temp;
 for(i=0;i<size;i++)
 {
  i=min;
  for(j=i+1;j<size;j++)
  {
   if(arr[min]>arr[j])
   {
    temp=arr[min];
    arr[min]=arr[j];
    arr[j]=arr[min];
   }
  }
 }
}
template<class T>
void show(T arr[],int size)
{
 int i;
 for(i=0;i<size;i++)
 cout<<arr[i]<<"  ";
}
template<class T> 
void input(T arr[],int size)
{
 for(int i=0;i<size;i++)
 {
  cin>>arr[i];
 }
}
int main()
{
 int a[10],s1,s2;
 float b[10];
 cout<<"\nHow many elements in integer array:";
 cin>>s1;
 cout<<"\nEnter "<<s1<<" Integer element:";
 int i;
 for(i=0;i<s1;i++)
 {
  cin>>a[i];
 }
 cout<<"\nHow many elements in float array:";
 cin>>s2;
 cout<<"\nEnter "<<s2<<" Float element:";
 for(i=0;i<s2;i++)
 {
  cin>>b[i];
 }
 cout<<"\nInteger array=";
 show(a,s1);
 selection(a,s1);
 cout<<"\nSorted integer array=";
 show(a,s1);
 cout<<"\nFloat array=";
 show(b,s2);
 selection(b,s2);
 cout<<"\nSorted Float array=";
 show(b,s2);
 return(0);
}
