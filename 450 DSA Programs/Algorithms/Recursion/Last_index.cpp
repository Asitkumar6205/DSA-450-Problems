#include<bits/stdc++.h>
using namespace std;

int last_index(int arr[], int i, int n, int x){
    if(i==n)
        return -1;
    int ans=last_index(arr,i+1,n,x);
    if(ans!=-1)
        return ans;
    else
        return arr[i]==x?i:-1;
}

int main(){
    int n, x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>x;
    cout<<last_index(arr, 0, n, x);
return 0;
}