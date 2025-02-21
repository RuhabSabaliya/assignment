#include<iostream>
using namespace std;
//object oriented
class area
{
	private:
	int length,width;
	public:
	void set(int l,int w)
	{
		length=l;
		width=w;
	}
	void display()
	{
		cout<<"Area of Rectangle is="<<length*width;
	}
};
//procedure oriented
	int Area(int l,int w)
	{
		return l*w;
	}
int main()
{
	int length,width;
	cout<<"Enter the value of length=";
	cin>>length;
	cout<<"Enter the value of width=";
	cin>>width;
	//oops
	area a1;
	a1.set(length,width);
	a1.display();
	//pops
	int	ans=Area(length,width);	
	cout<<"\nArea of rectangle is="<<ans;
	return 0;
}
