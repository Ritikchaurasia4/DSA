// Selection sort : In selection sort we find minimum element in the array and we swap the minimum element with first element in the array.

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[i]){
                // swap(arr[i] , arr[j]); 
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] =temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}