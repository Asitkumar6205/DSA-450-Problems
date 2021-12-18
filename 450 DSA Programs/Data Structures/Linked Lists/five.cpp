#include<iostream>
using namespace std;

void prmsiv(int n){
    int p[10000];
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            for(int j=i*i;j<=n;j+=i){
                p[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            cout<<i<<endl;
        }
    }
}

int main()
{
    int n; 
    cin>>n;
    prmsiv(n);
return 0;
}