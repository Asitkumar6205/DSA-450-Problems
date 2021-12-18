#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=n%10;
    if(n==2){
        cout<<"Prime";
    }
    else{
        if(n%2!=0 && n/r!=0){
            cout<<"Prime";
        }
        else{
            cout<<"Not Prime";
        }
    }
return 0;
}