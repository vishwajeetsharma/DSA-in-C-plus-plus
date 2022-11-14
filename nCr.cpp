#include<iostream>
using namespace std;

int factorial(int n){
    if (n < 0)
        return (-1); /*Wrong value*/
    if (n == 0)
        return (1); /*Wrong value*/
    else
    {
      return (n * factorial(n - 1));
    }
}

int nCr(int n, int r){
    int nFact = factorial(n);
    int rFact = factorial(r);

    int ans = (nFact)/((rFact)*(factorial(n-r)));

    return ans;
}

int main(){
    int n, r;

    cout<<"Enter your n to get the value of nCr: ";
    cin>>n;

    cout<<"Enter your r to get the value of nCr: ";
    cin>>r;

    cout<<"Your nCr is : "<<nCr(n,r);

    return 0;
}