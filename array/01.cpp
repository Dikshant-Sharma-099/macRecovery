#include<iostream>
using namespace std;

void countZeroone(int arr[], int size){
    int zerocount = 0;
    int onecount = 0;

 for(int i = 0; i < size; i++){
    //step 1
    if(arr[i] == 0){
          zerocount++;
    }
    if(arr[i] == 1){
        onecount++;
    }
 }    
        //step 2
        int index = 0;

        while(zerocount--){
            arr[index] = 0;
            index++;
        }
        
        while(onecount--){
            arr[index] = 1;
            index++;
        }

    
}

int main()
{
   int arr[12] = {0,1,1,0,1,0,0,1,0,1,1,0};
   int size = 12;
   countZeroone(arr , size);
   
   //printing the array
   for(int i = 0; i < size; i++){
    cout<< arr[i] <<" ";
   } 
}