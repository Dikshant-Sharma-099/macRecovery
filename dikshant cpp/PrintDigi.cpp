#include<iostream>
using namespace std;
void printALLdigits(int n){
    while(n){
        int onesplacedigits = n % 10;
        cout<<"digits:" <<onesplacedigits<<endl;
        n /= 10;
    }
}

int main()
{
    int n;
    cout<<"enter the number to see its digits"<<endl;
    cin>>n;
    printALLdigits(n);
}