#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr , int tar){
    int str = 0;
    int end = arr.size() - 1;
    while(str <= end){
        int mid = (str + end)/2;
        if(tar > arr[mid]){
            str = mid + 1;
        } else if(tar < arr[mid]){
            end = mid -1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main(){
    
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;

    cout<<binarySearch(arr , tar)<<endl;
    return 0;     

}