#include<bits/stdc++.h>
using namespace std;
int main(){
    char n;
    cin>>n;
    int a=int(n);
    if(a<=122 && a>=97){
        cout<<"lowercase";
    }
    else if(a<=90 && a>=65){
        cout<<"UPPERCASE";

    }
    else{
        cout<<"Invalid";    
    }
return 0;
}