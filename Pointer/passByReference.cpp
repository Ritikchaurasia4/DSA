// #include<iostream>
// using namespace std;

// void changeA(int *ptr){ //passby reference using pointer
//     *ptr = 10;
// }
// int main(){
//     int a = 20;
//     changeA(&a);
//     cout<<"Inside main function: " <<a <<endl;
//     return 0;
// }

// ---------------------------

#include<iostream>
using namespace std;

void changeA(int &b){ //passby reference using alias
    b = 10;
}
int main(){
    int a = 20;
    changeA(a);
    cout<<"Inside main function: " <<a <<endl;
    return 0;
}