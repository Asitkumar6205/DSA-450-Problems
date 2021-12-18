#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c, f;
    cin>>n;
    if(n==0){
        cout<<0;
    }
    if(n==1){
        cout<<1;
    }
    if(n==2){
        cout<<1;
    }
    for(int i=3;i<n;i++){
        c=(i-3)+(i-2);
        f+=c;
    }
return 0;
}