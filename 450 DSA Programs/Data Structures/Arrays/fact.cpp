#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	ll n, m, f=1, ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];    
    }
    for(int i=0;i<n;i++){
        m=a[i];
        if(m==0){
            f=1;
        }
        while(m!=0){
            f*=m;
            m--;
        }    
        a[i]=f;
        f=1;
        ans+=a[i];
    } 
    ans%=107;
    cout<<ans<<endl; 
	return 0;
}