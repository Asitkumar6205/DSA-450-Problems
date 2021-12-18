#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
	cin>>n;
	int l=n.length();
	int d=0, b=1;
    for(int i=l-1;i>=0;i--){	
		if(n[i]=='1'){
			d+=b;
		}	
		b*=2;
	}                  
	cout<<d<<endl;
	}
	return 0;
}