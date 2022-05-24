#include<stdio.h>
void left_1st_rotate(int a[], int n);
void left_2nd_rotate(int a[], int n, int k){
    for(int i=0;i<k;i++){
        left_1st_rotate(a,n);
    }
}
void left_1st_rotate(int a[], int n){
    int t=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=t;
}
void print(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
    int main(){
        int n, k; 
        scanf("%d",&n);  
        scanf("%d",&k);  
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        left_2nd_rotate(a,n,k);
        print(a,n);
    return 0;
    }