// #include<iostream>
// using namespace std;
// int main(){
//     int x=8;
//     cout<<&x;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=8;
//     int y=9;
//     cout<<&x<<endl<<&y;
// }

// #include<iostream>
// using namespace std;
// void swap(int& a,int& b){
//     // cout<<&a;
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
// int a;
// cout<<"Enter the value of a::";
// cin>>a;
// int b;
// cout<<"Enter the value of b::";
// cin>>b;
// swap(a,b);
// cout<<a<<" "<<b;
// // cout<<&a;
// }

// #include<iostream>
// using namespace std;
// void swap(int& a,int& b){
//     cout<<&a;
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
// int a;
// cout<<"Enter the value of a::";
// cin>>a;
// int b;
// cout<<"Enter the value of b::";
// cin>>b;
// swap(a,b);
// cout<<a<<" "<<b;
// cout<<&a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int *ptr;
//     ptr=&x;
//     cout<<ptr<<" "<<&x;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int kishan =9084;
//     int *ptr;
//     ptr=&kishan;
//     cout<<kishan<<endl;
//     cout<<&kishan<<endl;
//     cout<<*ptr;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int krish=673443;
//     int *ptr=&krish;
//    cout<<krish<<endl;
//    cout<<*ptr<<endl; 
//    cout<<&ptr<<endl; 
//    cout<<ptr<<endl;
//    cout<<&krish;
// }

#include<iostream>
using namespace std;
int main(){
    int Ram=34873865;
    int   *ptr=&Ram;
    cout<<*ptr<<endl;
    *ptr=6816146;
    cout<<*ptr;

}
