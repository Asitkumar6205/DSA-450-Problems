#include<bits/stdc++.h>
using namespace std;

int fibonacii_no(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return fibonacii_no(n-1)+fibonacii_no(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacii_no(n);
return 0;
}