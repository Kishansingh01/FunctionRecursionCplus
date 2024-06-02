// #include<iostream>
// using namespace std;
// int main(){
//     int c,d,e;
//     int a;
//     cout<<"Enter the value of a:::";
//     cin>>a;
//     int b;
//     cout<<"Enter the value of b:::";
//     cin>>b;
//     c=a+b;
//     d=c-a;
//     e=c-b;
//     cout<<"The swaping  of a is  "<<d  <<"   and b is  "<<e;}


// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int y=6;
//     cout<<x<<" "<<y<<endl;
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<x<<"  "<<y;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value of a:::";
//     cin>>a;
//     int b;
//     cout<<"Enter the value of b:::";
//     cin>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"The swaping  of a is  "<<a <<"   and b is  "<<b;}


    // #include<iostream>
    // using namespace std;
    //  int sum(int n,int m){
    //      return n+m;
    // }
    // int main(){
    //     int n;
    //     cout<<"Enter the value of n::";
    //     cin>>n;
    //     int m;
    //     cout<<"Enter the value of m::";
    //     cin>>m;
    //     cout<<sum(n,m);
    // }

    #include<iostream>
    using namespace std;
    void swap(int& a,int& b){
         a=a+b;
        b=a-b;
        a=a-b;
    }

    int main(){
        int a;
        cout<<"Enter the value of a::";
        cin>>a;
        int b;
        cout<<"Enter the value of b::";
        cin>>b;
        swap(a,b);
         cout<<a<<" "<<b;


    }

