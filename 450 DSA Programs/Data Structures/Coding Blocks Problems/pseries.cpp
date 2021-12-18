#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, s;
    cin>>n1;
    cin>>n2;
    for(int i=1;i<=n1;i++){
        s=(3*i)+2;
        if(s%n2!=0){
            cout<<s<<endl;
        }
        else{
            n1++;
        }
        s=0;    
    }
return 0;
}