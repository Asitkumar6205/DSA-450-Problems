#include<bits/stdc++.h>
using namespace std;

int DecimalToBinary(int x)
{
    int ans = 0;
    int fa = 0;
    while(x>0)
    {
        int ld = x%2;
        ans = ans * 10 + ld;
        x = x/2;
    }
    while (ans!=0)
    {
        int d = ans % 10;
        fa = fa * 10 + d;
        ans = ans/10;
    }
    
    return fa;
}

int32_t main()
{
    int n;
    cin>>n;

    cout<< DecimalToBinary(n)<<endl;
    return 0;
}