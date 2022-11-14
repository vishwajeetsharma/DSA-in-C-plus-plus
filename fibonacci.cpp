#include<iostream>
using namespace std;

int fib(int n){

    if (n <= 1){
        return n;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }

}

int main(){
    int n;

    cout<<"Enter your value: ";
    cin>>n;

    int ans = fib(n);

    cout<<endl<<"Your ans is: "<<ans;

    return 0;
}