#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0 ; i<size; i++){
        cout<< arr[i] << " ";
    }
}
bool linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){

        // found
        return true;
        }
    }
     //not found
        return false;
}


int main()
{
    int arr[5] = {2,3,4,4,6};
    int size = 5;
    int target = 7;
//     //function call 
//     printArray(arr , size);
    bool ans = linearSearch(arr, size, target);
    if(ans==1){
        cout<<"Target found"<< endl;
    }
    else{
        cout<<"Target not found"<< endl;
    }
 }