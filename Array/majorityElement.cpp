#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = { 1, 2 , 2 , 1 , 1, 1};
    int n = arr.size();
    for(int val : arr){
        int frequency = 0;
        for(int ele : arr){
            if(ele == val){
                frequency ++;
            }
        }
        if(frequency > n/2){
            cout<<val;
        }
    }
    return 0;
}