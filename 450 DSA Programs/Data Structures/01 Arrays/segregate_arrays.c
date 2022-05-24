#include<stdio.h>
void swap(int* a, int* b){
    int t=*a; *a=*b; *b=t;
}
void segregator(int a[], int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            j++;
            swap(&a[i],&a[j]);
        }
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
        segregator(a,n);
        print(a,n);
    return 0;
    }