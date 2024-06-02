#include<iostream>
using namespace std;

int swap(int a,int b){
    return a=a+b;
    b=a-b;
    a=a-b;

}
int main(){
    int a=5;
    int b=7;
    cout<<a<<" "<<b<<endl;
    // swap(a,b);
     a=a+b;
    b=a-b;
    a=a-b;

    cout<<a<<" "<<b<<endl;
}