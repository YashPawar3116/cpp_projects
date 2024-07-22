#include <iostream>
using namespace std;

class Calculations
{
 public:
 
 int a;
 
 int b;
 
 
  int sum()
  {
   int add = a + b ;
   cout<<"Sum of the numbers = "<<add<<endl;
  }
  
  int diff()
  {
   int sub = a - b ;
   cout<<"Diffrence between the numbers = "<<sub<<endl;
  }
   
  int product()
  {
   int mul = a * b ;
   cout<<"Product of the numbers = "<<mul<<endl;
  }
  
  int divide()
  {
   int div = a / b ;
   cout<<"The solution of the given operation = "<<div<<endl;
  }

};

int main()
{
   
Calculations obj;

cout<<"Enter the Number"<<endl;
    	 cin>>obj.a;
    	 
cout<<"Enter the Number"<<endl;
			 cin>>obj.b;

obj.sum();

obj.diff();

obj.product();

obj.divide();

return 0;

}

  
  
