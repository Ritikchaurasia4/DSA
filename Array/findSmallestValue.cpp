#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the array size: ";
    cin>>size;

    int nums[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the size of the array: ";
        cin>>nums[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<size;i++){
        
        smallest = min(nums[i] , smallest);
        largest = max(nums[i] , largest);

    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<smallest<<endl;

    return 0;
}