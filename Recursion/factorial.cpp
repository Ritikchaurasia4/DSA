#include<iostream>
using namespace std;

int  factorialNum(int n){

    if(n == 0) return 1;   // This is the base case  O(n)

    return n * factorialNum(n-1);
}

int main(){
    cout<<factorialNum(4);
    return 0;
}