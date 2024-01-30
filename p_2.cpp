#include<iostream>
#include<cstring>
using namespace std;
class student
{
	private:
		char name[20];
		int roll;
		char class1[10];
	public:
		static int countb;
		student()
		{
			roll = 1;
			strcpy(name,"ABC");
			strcpy(class1,"SE");
			countb++;
		}
		void getdata()
		{ 
		    cout<<"\nenter roll no:";
		  	cin>>roll;
			cout<<"\nname of student:";
			cin>>name;
			cout <<"\nenter date of birth:";
			cin>>class1;
		}
		student(student &s)
		{
			roll = s.roll;
			strcpy(name,s.name);
			strcpy(class1,s.class1);
			countb++;
		}
		friend void display(student s);
		static void count()
		{
			cout<<"student count-> \t"<<countb;
		}
		~student()
		{
			cout<<"Name\t"<<this->name<<"\tdeleted"<<endl;
		}
};


int student::countb=0;
void display(student s)
{
	cout<<"Name:"<<s.name<<endl;	
	cout<<"Roll:"<<s.roll<<endl;
	cout<<"Class:"<<s.class1<<endl;
}

int main()
{	
	student s1,*ptr[10];
	display(s1);
	student s3(s1);
	display(s3);
	int n;
	cout<<"how many student database you can save="<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		ptr[i] = new student;
		
		ptr[i]->getdata();
	}
	for(int i=0;i<n;i++)	
	{
		cout<<" \tstudent data\t "<< i <<endl;
		display(*ptr[i]);
	}
	for(int i=0;i<n;i++)	
	{
		delete ptr[i];
	}
	return 0;
}						
		

