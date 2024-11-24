#include<iostream>
using namespace std;

int  calSum(int n){

    if(n == 1){  // Base case here
        return 1;
    }

    return n + calSum(n-1);
    
}

int main(){
    cout<<calSum(4);
    return 0;
}