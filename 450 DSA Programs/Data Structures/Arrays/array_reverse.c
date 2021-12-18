#include<stdio.h>
    int main(){
        int i=0, n, t;
        scanf("%d",&n); int r[n];
        for(i=0;i<n;i++){
            scanf("%d",&r[i]);
        }
        int a=0, z=n-1;
        while(a<z){
            t=r[a];    r[a]=r[z];    r[z]=t;
            a++;    z--;
        }
        for(i=0;i<n;i++){
            printf("%d\t",r[i]);
        }    
    return 0;
    }