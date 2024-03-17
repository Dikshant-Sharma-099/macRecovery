#include<iostream>
using namespace std;


int printFact(int n){
    int prod = 1;
    for (int i = n; i >= 1; i--){
        prod *= i;
    }
    return prod;
}




int main(){
    cout<<printFact(3)<<endl;
        
}