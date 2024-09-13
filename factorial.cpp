#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact=fact*i ;

    }
    return fact;
}
int main()
{
    int n;
    cout<<"Enter the Number here: ";
    cin>>n;
    // cout<<factorial(n);
    int res = factorial(n);
    cout<<res;
}