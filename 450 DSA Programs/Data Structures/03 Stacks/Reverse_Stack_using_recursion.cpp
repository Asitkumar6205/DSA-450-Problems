#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(){
    
}

void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st,temp);
}

int main(){
    
return 0;
}