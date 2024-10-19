#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l = { 1, 2, 3, 4, 5, 6};
    l.push_back(11);
    l.emplace_back(12);

    l.push_front(0);
    l.emplace_front(-1);

    l.pop_back();
    l.pop_front();

    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}