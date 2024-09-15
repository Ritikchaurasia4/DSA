// Ininsertion sort : we assume first element is sorted i.e ( index 0 value) , and the remaining element in the array is unsorted.Now the element of the unsorted element compare with the sorted element , until all the elements in the array are sorted.

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
    for(int i=1;i<size;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    cout<<"Array after insertion sort : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}