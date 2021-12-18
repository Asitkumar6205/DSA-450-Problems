#include<stdio.h>
void swap(int a[], int i, int j){
    int t=a[i]; a[i]=a[j], a[j]=t;
}
int partition(int a[], int l, int h){
    int i=l-1, j=l; int p=a[h];
    for(j=l;j<h;j++){            //*Focus Very Seriously
        if(a[j]<=a[h]){          //<----on this part
            i++;
            swap(a,i,j);
            j++;
        }
        else{
            j++;
        }
    }
    swap(a,i+1,h);
return i+1;
}
void quicksort(int a[], int l, int h){
    if(l<h){
        int p = partition(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
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
        quicksort(a,0,n-1);
        print(a,n);
    return 0;
    } 