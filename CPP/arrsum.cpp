#include <bits/stdc++.h>

using namespace std;

int sum(int *ptr,int n,int i)
{
	
	if(i<=n-1)
	{
		return (*(ptr+i))+sum(ptr,n,i+1);
	}
	else
		return 0;
}

int main()
{
	int arr[]={1,2,3,4};
	int n=4;
	int *p=&arr[0];
	int ans=sum(p,n,0);
	cout<<ans<<endl;
	return 0;
}