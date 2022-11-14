#include<iostream>
using namespace std;

bool isPrime(int n){

    for(int i=2; i<n; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;

}

int main(){
    int n;

    cout<<"Enter a number to check if it is prime or not: ";
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is a Prime number";
    }
    else{
        cout<<n<<" is not a Prime number";
    }

    return 0;
}