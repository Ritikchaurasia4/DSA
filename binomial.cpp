#include<iostream>
using namespace std;

    int factorial(int n){
        int fact = 1;
        for(int i=1;i<=n;i++){
            fact = fact*i;
        }
        return fact;
    }

    int nCr(int n , int r){
        int fact_n = factorial(n);
        int fact_r = factorial(r);
        int fact_nMr = factorial(n-r);

        return fact_n/(fact_r * fact_nMr);
    }

int main()

{
    int n;
    cout<<"Enter the number n here: ";
    cin>>n;

    int r;
    cout<<"Enter the number r here: ";
    cin>>r;

    cout<<nCr(n , r);
}