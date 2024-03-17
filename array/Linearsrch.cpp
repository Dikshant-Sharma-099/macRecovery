#include<iostream>
using namespace std;

int Findtarget(int arr[], int size, int target){
    bool flag= 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            //found
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"target found: "<<endl; 
    }
    else{
        cout<<"target not found"<<endl;
    }
    return flag;
}
int main()
{
    int arr[5]={1,2,3,3,6};
    int target= 6;
    int size = 5;
    // bool flag=0;
    
    cout<< Findtarget(arr, size, target)<<endl;

    // for(int i = 0; i < n; i++){
    //     if(arr[i]== target){
    //         //found 
    //         flag=1;
    //         break;

    //     }
    // }
    //     if(flag==1){
    //         cout<<"target found "<<endl;
    //     }
    //     else{
    //          cout <<"target not found"<<endl;
    //     }
}