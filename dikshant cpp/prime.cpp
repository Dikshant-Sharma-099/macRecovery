#include<iostream>
using namespace std;
bool printPrime(int n){
    for(int i = 2 ; i <=n/2 ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}    

int main(){
    cout<<printPrime(5)<<endl;
   
}