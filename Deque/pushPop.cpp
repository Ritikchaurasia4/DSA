#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d = { 1, 2, 3, 4, 5, 6}; // internally , it is implemented with the help of dynamic arrays . (Random access possible)
    d.push_back(11);
    d.emplace_back(12);

    d.push_front(0);
    d.emplace_front(-1);

    d.pop_back();
    d.pop_front();

    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<d[7];  // Random access possible , but in list random access not possible 
    return 0;
}