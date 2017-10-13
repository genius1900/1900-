#include<iostream.h>
#include"math.h"
void main()
{
	double a,b,c,s,x;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	x=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Ãæ»ýx="<<x<<endl;
}

