#include<bits/stdc++.h>
using namespace std;
int Setbit(int n)
{
	int x;
	x= n & ~(n-1);
	return(log2(x) + 1);
 } 
 int main()
 {
 	int n;
 	cin >> n ;
 	int y=Setbit(n);
 	cout << y;
 	return 0;
 }
