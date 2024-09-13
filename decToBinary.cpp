// Decimal to Binary 
#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans = 0 , power = 1; // Here 1 means 10 to the power 0
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans = ans + (rem * power);
        power = power * 10;
    }
    return ans;
}
int main(){
    int decNum ;
    cout<<"Enter the Decimal Number :";
    cin>>decNum;
    cout<<decToBinary(decNum)<<endl;

    for(int i=1;i<=10;i++){
        cout<<decToBinary(i)<<endl;

    }
}