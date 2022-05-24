#include<bits/stdc++.h>
using namespace std;

int first_index(int arr[], int i, int n, int x){
    int ans = -1;
    if(i == n)
        return -1;
    if(arr[i] == x)
        return i;
    else{
        ans = first_index(arr, i+1, n, x);
        return ans;
    }       
}

int main(){
    int n, x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>x;
    cout<<first_index(arr, 0, n, x);
return 0;
} 