#include <bits/stdc++.h>
using namespace std;
/*
void join(string *str)
{
	long long num=0,sum=0;
	for(int i=0;i<3;i++)
	{
		num=0;
		if(!str[i].empty()) num=stringtoInt4(str[i]);
		sum=sum*10000;
	}
	cout<<sum<<endl;
}
*/

void join(int *str)
{
	long long num=0,sum=0;
	
	for(int i=0;i<3;i++)
	{
		num=str[i];
		sum=sum*10000;
		sum+=num;
	}
	cout<<sum<<endl;
	
}

int main()
{
	int a[3] = {9999,6690,6888};
	string str[3] = {"","909","0032"};
	join(a);
}
