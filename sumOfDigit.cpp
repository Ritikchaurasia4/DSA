#include<iostream>
using namespace std;
int sumOfDigit(int n)
{
    int digitSum = 0;
    while(n>0){
        int rem = n%10;
        digitSum  = digitSum + rem;
        n = n/10;
    }
    return digitSum;
}
int main(){
    int n;
    cout<<"Enter the number here: ";
    cin>>n;
    cout<<sumOfDigit(n);
}