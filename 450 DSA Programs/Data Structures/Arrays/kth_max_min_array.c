#include<stdio.h>
    int main(){
        int n, t, l;
        scanf("%d",&n); int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]<a[j]){
                    t=a[i]; a[i]=a[j]; a[j]=t; 
                }
            }         
        }
        scanf("%d",&l);
        printf("%d\t",a[l]);
    return 0;
    }