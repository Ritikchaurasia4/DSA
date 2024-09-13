// vector is same like as an array but it is a dynamic  it means we can change its memory size

#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> vec;  // There is no element initialized in vector
    // cout<<vec.size(); // 0 ( if there is no element initialized in vector)
    // cout<<vec[0];   // error : segmentation fault

// ------------------------------------

    // vector<int> vec = {1,2,3,4,5,6,7};   // Here vector has initialized
    // cout<<vec.size()<<endl;
    // cout<<vec[0];

// ----------------------- using for loop ---------------------

    // vector<int> vec = {'a','b','c','d','e'};

    // for(int val : vec){
    //     cout<<val<<endl;  // print ASCII value
    // }

    // vector<char> vec = {'a','b','c','d','e'};

    // for(char val : vec){
    //     cout<<val<<endl;  
    // }

// ------------- We can also defined vector , given below....................

    // vector<int> vec(3,0);  // here first element i.e (3) represents size and second elements i.e (0) return vec element
    // cout<<vec.size()<<endl;
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;

// ---------------- There are many function that are used in vector..... , some function are given below.

    //   0.  size
    //   1.  push_back 
    //   2.  pop_back
    //   3.  back  (print the last element of vector)
    //   4.  front (print the first element of vector)
    //   5.  at

    vector<int> vec = {1,5,2,6,8,9};

    cout<<"size is :"<<vec.size()<<endl;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout<<" after push_back size is :"<<vec.size()<<endl; // 10
    cout<<" after push_back size is :"<<vec.capacity()<<endl; // 12

    for(int val : vec){

        cout<<val<<" ";  //  1 4 2 6 8 9 10 20 30 40

    }

    vec.pop_back();  // delete the last element

    cout<<endl;

    for(int val : vec){

        cout<<val<<" ";  //  1 4 2 6 8 9 10 20 30 

    }
    cout<<endl;

        
    cout<<vec.front()<<endl; // 1
    cout<<vec.back()<<endl;  // 30

    



    return 0;
}