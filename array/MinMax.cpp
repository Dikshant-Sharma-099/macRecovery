#include<iostream>
#include<limits.h>
using namespace std;
int PrintMinimumInArray(int arr[], int size){
    int minAns = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main()
{
    int arr[5]={23,34,54,-67,20};
    int size = 5;
    int minimum = PrintMinimumInArray(arr,size);
    cout<<"minimum number is: "<<minimum<<endl;
}