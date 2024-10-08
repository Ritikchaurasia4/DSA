#include <iostream>
#include<vector>
using namespace std;

int pivotedSearch(vector<int>& arr, int key) {

    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key){
            return mid;
        }
            
        if (arr[mid] >= arr[low]) {
          
            if (key >= arr[low] && key < arr[mid])
                high = mid - 1;
          
            else
                low = mid + 1;
        }
      
        else {
          
            if (key > arr[mid] && key <= arr[high])
                low = mid + 1;
          
            else
                high = mid - 1;
        }
    }

    return -1; 
}

int main() {
    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    int key1 = 0;
    int result1 = pivotedSearch(arr1, key1);
    cout << result1 << endl; // Output: 4

    vector<int> arr2 = {4, 5, 6, 7, 0, 1, 2};
    int key2 = 3;
    int result2 = pivotedSearch(arr2, key2);
    cout << result2 << endl; // Output: -1

    return 0;
}
