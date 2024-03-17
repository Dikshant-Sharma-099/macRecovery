#include<iostream>
using namespace std;

void printReverse(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    //printing the array
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[7] = {10,20,30,40,50,60,70};
    int size = 7;
    printReverse(arr,size);
}