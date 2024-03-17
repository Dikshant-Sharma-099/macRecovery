#include<iostream>
using namespace std;

// without arg without return
void fun1(){
    int a = 10;
    int b = 20;
    int c = a+b;
    cout<<"sum is : " << c << endl;

}

//with arg without return
void fun2(int a , int b){
    int c = a+b;
    cout<<"sum is : " << c << endl;

}

// with arg with return
int fun3(int a , int b){
    int c = a+b;
    return c;
} 

// without arg with return 
int fun4(){
    int a = 10;
    int b = 20;
    int c = a+b;
    return c;
} 

int main()
{
    // fun1();

    // fun2(1 , 20);

    // int ans = fun3(10 , 10);
    // cout<< ans << endl;
    // return 0;

    int ans1 = fun4();
    cout<<ans1<< endl;

}