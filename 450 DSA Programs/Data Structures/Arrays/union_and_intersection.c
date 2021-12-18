#include<stdio.h>
void union_(int a1[], int a2[], int m, int n){
    int i=0, j=0; 
    while(i<m && j<n){
        if(a1[i]<a2[j]){
            printf("%d ",a1[i++]);
        }
        else if(a1[i]>a2[j]){
            printf("%d ",a2[j++]);
        }
        else{
            printf("%d ",a2[j]);
            a1[i++]; a2[j++];
        }
    }
    while(i<m){
        printf("%d ",a1[i++]);
    }
    while(j<n){
        printf("%d ",a2[j++]);
    }
}
void intersection(int a1[], int a2[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n){
         if(a1[i]<a2[j]){
            i++;
        }
        else if(a1[i]>a2[j]){
            j++;
        }
        else{
            printf("%d ",a2[j]);
            a1[i++]; a2[j++];
        }
    }
}
    int main(){
        int m, n;
        //Input elements in array a1[]
        printf("Enter size of a1 = \n");
        scanf("%d",&m); int a1[m];
        printf("Enter elements in a1 = \n");
        for(int i=0;i<m;i++){
            scanf("%d",&a1[i]);
        }
        //Input elements in array a2[]
        printf("Enter size of a2 = \n");
        scanf("%d",&n); int a2[n];
        printf("Enter elements in a2 = \n");
        for(int i=0;i<n;i++){
            scanf("%d",&a2[i]);
        }
        printf("Union = ");
        union_(a1,a2,m,n);
        printf("\n");
        printf("Intersection = ");
        intersection(a1,a2,m,n);
    return 0;
}