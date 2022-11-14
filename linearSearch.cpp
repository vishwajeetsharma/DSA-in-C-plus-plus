#include<iostream>
using namespace std;

bool found(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int key;
    cout<<"Enter you key: ";
    cin>>key;

    if(found(arr, size, key)){
        cout<<"Key is present in array";
    }
    else{
        cout<<"Key is absent";
    }

    return 0;
}