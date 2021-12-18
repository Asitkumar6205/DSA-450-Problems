#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		if(i%2!=0){
			cout<<i<<endl;
		}
	}
	for(int i=2;i<=n;i++){
		if(i%2==0){
			cout<<i<<endl;
		}
	}
	return 0;
}