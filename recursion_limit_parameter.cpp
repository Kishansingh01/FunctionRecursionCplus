// #include<iostream>
// using namespace std;
//     int number(int n,int m){
//         if(n>m)
//         return 0;
//         cout<<n<<" ";
//         number(n+1,m);
//     }
//     int main(){
//     int n;
//     cout<<"Enter the value of n:::";
//     cin>>n;
//    number(1,n); 
// }

// #include<iostream>
// using namespace std;
// int kishan(int n,int m){
//     if(n>m)
//     return 0;
//     kishan(n+1,m);
//     cout<<n<<" ";
// }
// int main(){
//    int n;
//    cout<<"Enter thr value of n  ::";
//    cin>>n;
//    kishan(1,n) ;


// }


// #include<iostream>
// using namespace std;
// int Ram(int n){
//     if(n==100)
//     return 0;
//     cout<<n<<" ";
//     Ram(n+1);

// }
// int main(){
//     Ram(1);
// }

// #include<iostream>
// using namespace std;
// int Ram(int n){
//     if(n==101)
//     return 0;
//     Ram(n+1);
//       cout<<n<<" ";

// }
// int main(){
//     Ram(1);
// }


// #include<iostream>
// using namespace std;
// int Ram(int n){
//     if(n==10)
//     return 0;
//     Ram(n+1);
//       cout<<n<<" ";

// }
// int main(){
//     int n;
//     cout<<"Enter the value of n ::";
//     cin>>n;
//     Ram(n);
// }

#include<iostream>
using namespace std;
int Ram(int n){
    if(n>5)
    return 0;
    cout<<n<<" ";
    Ram(n*(n+1)/2);

}
int main(){
    int n;
    cout<<"Enter the value of n ::";
    cin>>n;
    Ram(n);
}
