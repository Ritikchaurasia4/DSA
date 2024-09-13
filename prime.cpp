#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int i;
    bool isPrime = true;
    for(i=2;i*i<n;i++){
        if(n%2==0)
        {
            isPrime = false;
            break;
        }
        
    }
    if(isPrime == true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No";
    }
    return 0;
}