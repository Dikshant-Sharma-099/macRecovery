#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    cout<<"printing vector: "<<endl;
    int size = v.size();
    for (int i = 0; i < size; i++){
        cout << v[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    // vector initialization
    vector<int>arr; //default with no data, 0 size

    vector<int>arr2(5, -1); // initialized with size i.e 5 and -1 are the elements but it is dynamic as well
    print(arr2);
    // arr2.push_back(50); // see how we added 50 into the vector, hence its proved that it is dynamic
    // print(arr2);

    




    // in vector , dont tell size of vector.
    // just keep inserting ,  will manage the allocations.

    // vector<int> v; //array hi hai.

    // //inset data 
    // int n; 
    // cin>>n;
    // for(int i = 0; i < n; i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }
    // print(v);
    // for(int i = 0; i < 10; i++){
    //     v.push_back(80);
    // }
    //    //to clear a vector we use V.CLEAR;
      
    // print(v);

    // insering the vlaues.
    // v.push_back(1);
    //  v.push_back(2);
    //   v.push_back(3);
    // print(v);

    // TO FIND THE CAPACITY AND SIZE

    // while(1){
    //     int d; 
    //     cin >>d;
    //     v.push_back(d);
    //     cout << "capacity: " << v.capacity() << " size: " << v.size() << endl;
    // }

    //to delete we POP the vector and always the LAST vlaue gets pop first 
 
    // v.pop_back();
    // cout<<"popped vector: "<<endl;
    // print(v);

}