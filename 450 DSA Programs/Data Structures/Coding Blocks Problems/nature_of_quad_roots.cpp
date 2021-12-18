#include<bits/stdc++.h>
using namespace std;
int main(){
    float a, b, c;
    cin>>a>>b>>c;
    float d=(b*b)-(4*a*c);
    float x=(-b+sqrt(d))/(2*a);
    float y=(-b-sqrt(d))/(2*a);
    if(d>0){
        if(x<y){
            cout<<"Real and Distinct\n"<<x<<" "<<y;
        }
        else{
            cout<<"Real and Distinct\n"<<y<<" "<<x;
        }
    }
    else if(d==0){ 
        cout<<"Real and Equal\n"<<x<<" "<<y;
    }
    else{
        cout<<"Imaginary";
    }
return 0;
}