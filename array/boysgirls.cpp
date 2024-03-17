#include<iostream>
using namespace std;

int main()
{
    
    int boys; // Declaring an integer variable named 'boys'
    cin >> boys; // Taking input from the user and storing it in the variable 'boys'

    // Checking if the value of 'boys' is equal to 1 using the ternary conditional operator
    (boys == 1) ? cout << "only one boy in class" : cout << "many boys";
    
}

 