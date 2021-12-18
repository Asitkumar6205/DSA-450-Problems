#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r, e=0, o=0;
        cin>>n;
        while(n!=0){
            r=n%10;
            if(r%2==0){
                e+=r;
            }
            else{
                o+=r;
            }
            n=n/10;
        }
        if(e%4==0 || o%3==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
return 0;
}