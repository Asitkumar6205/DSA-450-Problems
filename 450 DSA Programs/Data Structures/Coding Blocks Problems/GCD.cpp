#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, r, v;
    cin>>n1>>n2;
    if(n1>n2){
        while(n2!=0){
            r=n1%n2;
            n1=n2;
            n2=r;
        }
        cout<<n1;
    }    
    else{
        while(n1!=0){
            r=n2%n1;
            n2=n1;
            n1=r;
        }
        cout<<n2;
    }
return 0;
}