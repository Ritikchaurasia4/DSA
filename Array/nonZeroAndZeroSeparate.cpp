#include<iostream>
#include<vector>
using namespace std;
void SeparateZero(vector<int> &arr){
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        int j = 0;
        while(j != i){
            if(arr[j] == 0 && arr[j+1] !=0 ){
                swap(arr[j] , arr[j+1]);
                
            }
            j++;
        }
        
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SeparateZero(arr);
    cout<<"The separeted non zero and zero value are :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}