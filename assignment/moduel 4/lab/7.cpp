#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter the first Number=";
	cin>>n1;
	cout<<"Enter the second Number=";
	cin>>n2;
	
	cout<<"\nArithmatic operator:\n";
	cout<<"\nAdition of"<<n1<< "and" <<n2<< "is=" <<n1+n2;
	cout<<"\nsubstraction of"<<n1<<"and"<<n2<< "is=" <<n1-n2;
	cout<<"\nmultiplication of"<<n1<<"and"<<n2<< "is=" <<n1*n2;
	cout<<"\ndivison of"<<n1<<"and"<<n2<< "is=" <<(double)n1/n2;
	cout<<"\nModuelo of"<<n1<<"and"<<n2<< "is=" <<n1%n2;


	cout<<"\nrelational operator:\n";
	cout<<"\n"<<n1<<" equal to "<<n2<< "is=" <<(n1==n2);
	cout<<"\n"<<n1<<" less than "<<n2<< "is=" <<(n1>n2);
	cout<<"\n"<<n1<<" less than equal to "<<n2<< "is=" <<(n1>=n2);
	cout<<"\n"<<n1<<" greater than "<<n2<< "is=" <<(n1<=n2);
	cout<<"\n"<<n1<<" greater than equal to "<<n2<< "is=" <<(n1<=n2);
	cout<<"\n"<<n1<<" not equal to "<<n2<< "is=" <<(n1!=n2);
	
	cout<<"\nLogical operator:\n";
	cout<<"\n"<<n1<<" and "<<n2<<" is=" <<(n1 && n2);
	cout<<"\n"<<n1<<" OR "<<n2<<" is=" <<(n1 || n2);
	cout<<"\n"<<n1 <<"NOT is" <<(!n1);
	cout<<"\n"<<n2<<" NOT is=" <<(!n2);
	
	cout<<"\nbit wise operator:\n";
	cout<<"\n"<<n1<<" and "<<n2<<" is=" <<(n1 & n2);
	cout<<"\n"<<n1<<" OR "<<n2<<" is=" <<(n1 | n2);
	cout<<"\n"<<n1<<"Left shift is="<<(n1<<2);
	cout<<"\n"<<n1<<"Right shift is="<<(n1>>2);
	return 0;
}
