#include<iostream>
using namespace std;

int isEven(int a){
    if(a%2 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    int isEvenAns = isEven(n);

    if(isEvenAns == 1){
        cout<<endl<<n<<" is Even";
    }
    else{
        cout<<endl<<n<<" is Odd";
    }

    return 0;
}