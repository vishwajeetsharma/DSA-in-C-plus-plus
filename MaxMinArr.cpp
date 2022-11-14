#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int findMax(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int size = 5;

    int arr[5] = {15, 14, 5, 12, 11};

    cout<<"minimum value in this array is: "<<findMin(arr, size)<<endl;
    cout<<"maximum value in this array is: "<<findMax(arr, size);

    return 0;
}