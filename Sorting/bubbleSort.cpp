// Bubble sort :  swap two adjacent element if they are in wrong order means( first ele > second ele).

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int counter = 1;
    while(counter < size){
        for(int i=0;i<size-counter;i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i] , arr[i+1]);
            }
        }
        counter ++;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}