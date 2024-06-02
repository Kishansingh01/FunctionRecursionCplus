// #include<iostream>
// using namespace std;
// int main(){
//     int x=3;
//     int y=5;
//     int *ptr=&x;
//    cout<<*ptr; 
//    // int *ptr=&y;
//    *ptr=5;
//    cout<<*ptr<<" ";     GALAT HAI
//    *ptr=3;
//    cout<<*ptr;
// }

// #include<iostream>
// using namespace std;
// void swap(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;

// }
// int main(){
//     int x=5;
//     int y=7;
//     cout<<x<<" "<<y<<endl;
//     swap(&x,&y);
//    cout<<x<<" "<<y; 
// }

#include<iostream>
using namespace std;
void sum(int x,int y){
    cout<<x+y;

}
int main(){int a;
cout<<"Enter the value of a::";
cin>>a;
int b;
cout<<"Enter the value of b::";
cin>>b;
sum(a,b);

}