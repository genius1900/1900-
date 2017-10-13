#include<iostream.h>
void main()
{
	int n,sum=0;
	cin>>n;
	while(1)
	{
		if(n%2==0)
		{
	        n=n/2;
			sum++;
	        cout<<"-"<<n;
	        if(n==1)
		        break;
		}
		else
		{
			n=n*3+1;
			sum++;
			cout<<"-"<<n;
		}
	}
	cout<<"\n"<<"sum="<<sum<<endl;
}





