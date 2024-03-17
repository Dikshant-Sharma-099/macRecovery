#include<iostream>
using namespace std;
float KMTOMILES(float km){

     float Milesin1km = 0.621371;
    float miles = km * Milesin1km;
    return miles;
}

int main()
{
    float km;
    cout<<"tell me km  ";
    cin>>km;
    cout<<"miles=  "<<KMTOMILES(km)<<endl;    
}