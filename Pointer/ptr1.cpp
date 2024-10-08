#include<iostream>
using namespace std;
int main(){
    int a = 20;
    int* ptr = &a; 

    cout<<ptr<<endl;
    cout<< *ptr<<endl;
    
    // pointer to pointer
    int **parPtr = &ptr;
    cout<< *parPtr<<endl;
    cout<< **parPtr<<endl;
}