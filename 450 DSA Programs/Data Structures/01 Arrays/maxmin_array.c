#include<stdio.h>
#include<conio.h>
int maxarray(int a[], int n){
    int max=a[0];
    for(int i=0;i<n;i++){
         if(max<a[i]){
            max=a[i];
        }
    }
return max;  
}
int minarray(int a[], int n){
    int min=a[0];
    for(int i=0;i<n;i++){
         if(min>a[i]){
            min=a[i];
        }
    }
return min;  
}
    int main(){
        int n;
        scanf("%d",&n); int a[n]; 
        for(int i=0;i<n;i++){scanf("%d",&a[i]);}
        printf("Max = %d & Min = %d",maxarray(a,n),minarray(a,n));    
    return 0;
    getch();
    }