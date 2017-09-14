#include<iostream.h>
void main()
{
	int i,x;
	cout<<"please input i:";
	cin>>x;
	if(x<10) i=1;
	if(10<=x&&x<1000) i=2;
	if(100<=x&&x<1000) i=3;
	switch(i)
	{
	case 1:cout<<"i<10\n";break;
	case 2:cout<<"10<=i<=99\n";break;
	case 3:cout<<"100<=i<=999\n";break;
	default:cout<<":i>=1000\n";
	}
}