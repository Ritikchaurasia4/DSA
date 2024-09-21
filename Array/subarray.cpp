// Subarray : Subarray is a contonuous part of an array.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Subarray are :"<<endl;
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// =================== Maximum subarray sum ==================================
// we have input for understood   {3 , -4 , 5 , 4 , -1 , 7 , -8}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the array size: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     } 
//     int maxSum = n-1;
//     for(int str=0;str<n;str++){
//         int curSum = 0;
//         for(int end=str;end<n;end++){
//             curSum = curSum + arr[end]; 
//             maxSum = max(curSum , maxSum);
//         }
//     }
//     cout<<"Max subarray sum = "<<maxSum<<endl;
//     return 0;
// }

// ============================== Kadan's algorithm =============================

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int curSum = 0 , maxSum = n-1;
    for(int i = 0 ; i<n;i++){
        curSum = curSum + arr[i];
        maxSum = max(curSum , maxSum);
        if(curSum < 0){
            curSum = 0;
        }
    }
    cout<<"maximum subarray sum is :"<<maxSum;
    return 0;
}