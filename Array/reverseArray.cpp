// Reverse of an Array , using *2 pointer approach

#include<iostream>
using namespace std;

void reverseArray(int arr[] , int size){  // Function definition
    
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(arr[start] , arr[end]); // swap is predefined function in c++
        start++;
        end--;
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[] = {1,2,3,4,5};
    
    reverseArray(arr , size); // Function call
    for(int i=0;i<size;i++){

        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}