/*multiple inheritance*/
#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void getdata()
			{
				cout<<"enter value of a:";
				cin>>a;
			}
			void display()
			{
				cout<<"A is :"<<a;
			}
};
class B
{
	protected:
		int b;
		public:
			void getdata1()
			{
				cout<<"enter value of b:";
				cin>>b;
			}
			void display1()
			{
				cout<<"\nB is :"<<b;
			}
};
class C:public A,public B
{
	int c;
	public:
		void getres()
		{
			c=a*b;
			cout<<"\nMultiplication of a and b:"<<c;
		}
};
int main()
{
	C obj;
	obj.getdata();
	obj.getdata1();
	obj.display();
	obj.display1();
	obj.getres();
	
}
