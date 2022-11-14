#include<iostream>
using namespace std;

int sum(int num1, int num2) {
    return num1+num2;
}
int main() {
   
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1; j<=i; j++){

            cout<<"*";

        }

        cout<<endl;
    }

    
    return 0;
}