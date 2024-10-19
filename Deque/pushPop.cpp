#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d = { 1, 2, 3, 4, 5, 6};
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
    return 0;
}