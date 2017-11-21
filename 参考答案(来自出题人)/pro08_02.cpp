#include <iostream>
using namespace std;
long get_last2(int a[],int n)
{
	return 2*a[1]+a[0]+a[n];
}
int main()
{
	int a[105];
	int n=0,i=0,j=0;
	long sum_time=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=n-1;j>2;j=j-2)
	{
		sum_time=sum_time+get_last2(a,j);
	}
	if(j==0)
	{
		sum_time=sum_time+a[0];
	}
	else if(j==1)
	{
		sum_time=sum_time+a[1];
	}
	else
	{
		sum_time=sum_time+a[0]+a[1]+a[2];
	}
	cout<<sum_time<<endl;
	//system("pause");
	return 0;
}