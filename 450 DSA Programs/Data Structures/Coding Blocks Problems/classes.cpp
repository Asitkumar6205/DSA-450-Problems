#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int age;
    string name;
    bool sex;
    
    void printInfo(){
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"name = ";
        cout<<name<<endl;
        cout<<"sex = ";
        cout<<sex<<endl;
    }
};

int main(){
    student a[3];
    for(int i=0;i<3;i++){
        cout<<"Age = ";
        cin>>a[i].age;
        cout<<"name = ";
        cin>>a[i].name;
        cout<<"sex = ";
        cin>>a[i].sex;
    }
    for(int i=0;i<3;i++){
        a[i].printInfo();
    }
return 0;
}