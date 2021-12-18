#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, v=1; 
    cin>>n;
    cout<<"1"<<endl;
    for(int i=0;i<=n-2;i++){
        cout<<v;
        for(int j=0;j<i;j++){
            if(i%2==0){
                cout<<0;
            }
            else{
                cout<<1;
            }
        }
        cout<<v;
        cout<<endl;
    }
return 0;
}