#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=n-1;
    for(int z=0;z<(2*n)-1;z++){
        if(z<n-1){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<"\n";
    for(int i=0;i<n-2;i++){
        for(int k=1;k<c;k++){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            if(j==0 || j==n-2){
                cout<<"*";
            }
            cout<<" ";
        }   
        cout<<"\n";
        c--;
    }
    for(int i=1;i<n+1;i++){
        cout<<"*";
    }
return 0;
}