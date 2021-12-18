#include<iostream>
using namespace std;

void prmsiv(int s, int e){
    int p[10000];
    for(int i=s;i<=e;i++){
        if(p[i]==0){
            for(int j=i*i;j<=e;j+=i){
                p[j]=1;
            }
        }
    }
    for(int i=s;i<=e;i++){
        if(p[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

int main()
{
    int t, s, e;
    cin>>t;
    while(t--){
        cin>>s>>e;
        prmsiv(s,e);
    }
return 0;
}