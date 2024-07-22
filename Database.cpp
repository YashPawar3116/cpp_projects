#include <iostream>
#include <string>
using namespace std;
class Database
{ 
public:

 char Name[50];
 int  rollcall;
 char Class[10];
 char Division;
 string DOB;
 char Bloodgroup[5];
 char Address[100];
 int telephone_no;
 int Aadhar_no;
 

 
 Database()
	{
	  cout<< "Enter the Student's Name" <<endl ;
	  cin>>Name;
	  
	  cout<< "Enter the Student's Roll number" <<endl;
	  cin>>rollcall;
	  
	  cout<< "Enter the Student's Class" <<endl;
	  cin>>Class;
	  
	  cout<< "Enter the Student's Class division" <<endl;
	  cin>>Division;
	
	  cout<< "Enter the Student's Date of Birth" <<endl;
	  cin>>DOB;
	  
	  cout<< "Enter the Student's Bloodgroup" <<endl;
	  cin>>Bloodgroup;
	  
	  cout<< "Enter the Student's Address" <<endl;
	  cin>>Address;
	  
	  cout<< "Enter the Student's Telephone number" <<endl;
	  cin>>telephone_no;
	  
	  cout<< "Enter the Student's Aadhar number" <<endl;
	  cin>>Aadhar_no; 
   }
   
int disinfo()
  {
  
   cout<<"Name = "<<Name<<endl;
   
   cout<<"Roll Number = "<<rollcall<<endl;
   
   cout<<"Class = "<<Class<<endl;
   
   cout<<"Division = "<<Division<<endl;
   
   cout<<"DOB = "<<DOB<<endl;
   
   cout<<"Bloodgroup = "<<Bloodgroup<<endl;
   
   cout<<"Address = "<<Address<<endl;
   
   cout<<"Telephone Number = "<<telephone_no<<endl;
   
   cout<<"Aadhar Number = "<<Aadhar_no<<endl;

   }
   
   ~Database()
   {
    cout<<" Thank you, Visit Again!!! ";
    
   }
 };   
  
int main()
{
 int i;
 int n ;
 cout<<"enter no."<<endl;
 cin>>n;
 
 Database obj[n];
 
for(i = 0; i<n; i++)
  {
  obj[i].disinfo();   
  }
  
return 0;
  
}

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
			
