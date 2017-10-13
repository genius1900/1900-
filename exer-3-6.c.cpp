#include<iostream.h>
void main()
{
	double r,l,s,pi;int k;
	cin>>r>>k;
	pi=3.14159;
	l=2*pi*r;
	s=r*r*pi;
	switch(k)
	{
        case 1:cout<<"周长l="<<l<<endl;break;
        case 2:cout<<"面积s="<<s<<endl;break;
        case 3:cout<<"周长l="<<l<<endl;
	          cout<<"面积s="<<s<<endl;
	}
}