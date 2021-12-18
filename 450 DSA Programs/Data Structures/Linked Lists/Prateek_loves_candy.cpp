#include<iostream>
using namespace std;

void prmsiv(int n){
    int p[10000]; int a[n]; 
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            for(int j=i*i;j<=n;j+=i){
                p[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            a[i-1]=i;
        }
    }
    
}

int main(){   
    int t; 
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        prmsiv(n);
        cout
    }
return 0;
}