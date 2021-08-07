#include<bits/stdc++.h>
using namespace std;

int RightmostDiffbit(int m, int n)
{
	int x,y;
	x=m^n;
	y= x & ~(x-1);
	return (log2(y)+1); 
}
int main()
{
	int n,m;
	cin>>m>>n;
	cout<<RightmostDiffbit(m,n);
	return 0;
}
