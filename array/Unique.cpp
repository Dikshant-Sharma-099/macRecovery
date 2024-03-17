#include<iostream>
using namespace std;
int Uniqueans(int arr[], int n){
int ans = 0;
for(int i = 0; i < n; i++){
    ans = ans^arr[i];
}
return ans;
}

int main()
{
    int arr[] = {2,2,3,3,4,4,5,5,6,7,7};
    int n = 9;

    int finalans = Uniqueans(arr, n);
    cout<<"final answer is: "<< finalans << endl;
}