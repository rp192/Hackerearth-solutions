#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long a[t],b[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	} 
	sort(a,a+t);
	int g=0;
	int f=t;
	int flag=0;
	while((f)!=0)
	{
		long long  sum=0;
		for(int i=0;i<t;i++)
		{
			if(i==g) continue;
			else sum=sum+a[i];
		}
		if(sum%7==0) { flag=1;break;}
		g++;
		f--;
	}
	if(flag==1)
	{
	for(int i=0;i<t;i++)
	{
		if(b[i]==a[g]) {cout<<i; break;}
	}
	}else cout<<"-1";
}
