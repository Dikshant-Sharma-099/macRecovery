#include<iostream>
using namespace std;
int createNumbersusingdigits(int digitstonumbers){
    int num = 0;
    for(int i=0; i<digitstonumbers; i++){
    cout<<"Enter digits: "<<endl;
    int digit;
    cin>>digit;
    num = num * 10 + digit;
    cout<<"number created so far "<<num<<endl;
    }
    return num;
}


int main()
{
    int digitstonumbers;
    cin>>digitstonumbers;
    cout<<createNumbersusingdigits(digitstonumbers)<<"  is Number created by the digits"<<endl;

}