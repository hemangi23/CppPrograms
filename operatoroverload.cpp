/*operator overloading--concept of polymorphism in which we overload operator + or -
1.unary operator
2.binary operator*/
#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public :
		void getdata(int a,int b,int c);
		void display(void);
		void operator-(); //operator overload
};
void space :: getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void space :: display(void)
{
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";
}
void space :: operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	space s;
	s.getdata(10,-20,30);
	cout<<"S is:";
	s.display();
	-s; //operator activate
	cout<<"S is:";
	s.display();
}

