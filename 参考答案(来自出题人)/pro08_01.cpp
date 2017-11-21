# include<iostream>
using namespace std;
int a[100];
int max_num=0,max_pos=0;

void get_max_numandpos(int n)
{
	for (int i=0;i<n;i++)
	{
		if(a[i]>max_num)
		{
			max_num=a[i];
			max_pos=i+1;
		}
	}
	return ;
}
int main()
{
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    get_max_numandpos(n);
	cout<<max_num<<" "<<max_pos<<endl;
	//system("pause");
	return 0;
}
