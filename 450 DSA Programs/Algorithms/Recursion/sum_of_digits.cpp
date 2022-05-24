#include<bits/stdc++.h>
using namespace std;

int sumd(int n){
    if(n==1)
        return 1;
    else
        return n+sumd(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<sumd(n);
return 0;
}