/*friend classes-to access the properties of one class into another*/
#include<iostream>
using namespace std;
class XYZ;
class ABC
{
	int x;
	public:
		void setvalue(int a)
		{
			x=a;
		}
		friend int max(ABC,XYZ);
};
class XYZ
{
	int y;
	public:
		void setvalue1(int b)
		{
			y=b;
		}
		friend int max(ABC,XYZ);
};
int max(ABC a1,XYZ x1)
{
	if(a1.x>x1.y)
	{
		return(a1.x);
	}
	else
	{
		return(x1.y);
	}
}
int main()
{
	ABC ab;
	XYZ xy;
	ab.setvalue(75);
	xy.setvalue1(52);
	cout<<"Greater value is:"<<max(ab,xy);
}
