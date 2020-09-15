#include<iostream>
using namespace std;
class code
{
	int id;
	public:
		code() //default constant
		{
			
		}
		code(int x) //parametric constant
		{
			id=x;
		}
		code(code &x) //copy constructor
		{
			id=x.id;
		}
		void display()
		{
			cout<<"\nId is:"<<id;
		}
};
int main()
{
	code A(100);
	code B(A); //copy constant called
	code C=A; //copy constant called
	code D; //declaration of object
	D=A; //intialization of object
	A.display();
	B.display();
	C.display();
	D.display(); 
}
