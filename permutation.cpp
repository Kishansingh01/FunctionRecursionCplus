#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n::";
    cin>>n;
    int r;
    cout<<"Enter the value of r::";
    cin>>r;
    // int c;
    // cout<<"Enter the value of c";
    // cin>>c;
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    int b=1;
    for(int i=1;i<=r;i++){
        b*=i;
    }
    int c=1;
    for(int i=1;i<=n-r;i++){
        c*=i;
    }
    cout<<a/b*c;

}