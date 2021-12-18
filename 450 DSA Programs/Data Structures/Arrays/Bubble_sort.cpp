#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int n, c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-c;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }            
        }
        c++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}