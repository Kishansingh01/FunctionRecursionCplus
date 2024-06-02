// #include<iostream>
// using namespace std;
// int number(int n){
//     if(n==101)
//     return 0;
//     cout<<n<<"  ";
//     number(n+2);

// }
// int main(){
//     number(1);
// }

// #include<iostream>
// using namespace std;
// int number(int n){
//     cout<<n<<"  ";
//     if(n==100)
//     return 0;
//     number(n+2);
// }
// int main(){
//     number(0);
// }

// #include<iostream>
// using namespace std;
// int counting1(int n){
// cout<<n<<" ";
// if(n==101)
// return 0;
// counting1(n+1);}
// int main(){
//     counting1(1);
// }

// #include<iostream>
// using namespace std;
// int counting1(int n){
// cout<<n<<" ";
// if(n==0)
// return 0;
// counting1(n-1);}
// int main(){
//     counting1(100);
// }

// #include<iostream>
// using namespace std;
// int counting1(int m){
// cout<<m<<" ";
// if(m==0)
// return 0;
// counting1(m-1);}
// int main(){
//     int n;
//     cout<<"Enter the value of n:::";
//     cin>>n;
//     counting1(n);
// }

#include<iostream>
using namespace std;
int counting1(int m){
cout<<m<<" ";
if(m==100)
return 0;
counting1(m+1);}
int main(){
    int n;
    cout<<"Enter the value of n:::";
    cin>>n;
    counting1(n);
}

