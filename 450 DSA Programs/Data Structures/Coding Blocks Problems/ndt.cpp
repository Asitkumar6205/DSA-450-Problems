#include<bits/stdc++.h>
using namespace std;
int ndt(int n, int k){
	int r, i=0;
	while(n!=0){
		r=n%10;
		if(r==k){
			i++;
		}
		n=n/10;
	}
	return i; 
}

int main(){
	int n, k;
	cin>>n;
	cin>>k;
	cout<<ndt(n,k);
	return 0;
}