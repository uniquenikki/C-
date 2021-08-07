#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
    {
        int res=0;
        int i;
        for(i=1;i<=n;i++)
        {
            while(i>0)
            {
                if(i%2!=0)
                    res=res+1;
                i=i/2;    
            }
        }
        return res;
    }

int main()
{
    int n;
    cin >> n ;
    cout << countSetBits(n);
	return 0;
}
