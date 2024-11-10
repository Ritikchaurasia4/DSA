#include<iostream>
#include<climits>
using namespace std;
int getMaxSum(int mat[][3] , int rows , int cols){
    int maxRowSum = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSums = 0;
        for(int j=0;j<cols;j++){
            rowSums = rowSums + mat[i][j];
        }
        maxRowSum = max(maxRowSum , rowSums);
    }
    return maxRowSum;
}
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{6,7,8}};
    int rows = 3;
    int cols = 3;

    cout<<getMaxSum(mat , rows , cols)<<endl;

    return 0;
}