#include<iostream>
using namespace std;
int main(){
    string day;
    cout<<"Enter the day here:";
    cin>>day;

    int val;
    cout<<"Enter the value here:";
    cin>>val;

    int start = 0;
    int sum = 1;
    while(sum <= val){
        start ++;
        sum = sum + 7;
    }
    cout<<start;
    return 0;
}