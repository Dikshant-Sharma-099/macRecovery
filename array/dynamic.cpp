#include<iostream>
using namespace std;
void fun(int arr[], int n){
    cout<< "array elements are: "<<endl;
    for(int i = 0; i < n; i++){
        cout<< arr[i] <<" ";
    }
}

int main()
 {   // static mem allocation of array
//     int arr[5] = {1,2,3,4,5};

    // dynamic 
    int n;
    cin>>n;
    
    int *arr  = new int[n]; //each element would be 0 or a garbage value

    // taking n elements input and inserting in array
    for(int i = 0; i < n; i++){
        int data;
        cin>> data;
        arr[i] = data;
    }
    
    // let me try to insert more items
    arr[n] = 80;
    fun(arr,n);
    
}