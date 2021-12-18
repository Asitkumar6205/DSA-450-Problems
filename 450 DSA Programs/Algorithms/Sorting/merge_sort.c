#include<stdio.h>
void merge(int a[], int l, int m, int h){
    int i=l, j=m+1, k=l, b[h+1];
    while(i<=m && j<=h){
        if(a[i]<=a[j]){
            b[k]=a[i]; i++;
        }
        else{
            b[k]=a[j]; j++;
        }
        k++;
    }
    while(i<=m){
        b[k]=a[i]; i++; k++;
    }
    while(j<=h){
        b[k]=a[j]; j++; k++;
    }
    for(int i=l;i<=h;i++){
        a[i]=b[i];
    }
}
void mergesort(int a[], int l, int h){
    if(l<h){
        int m=(l+h)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}
void print(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
    int main(){
        int n;
        scanf("%d",&n); int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        mergesort(a,0,n-1);
        print(a,n);
    return 0;
}