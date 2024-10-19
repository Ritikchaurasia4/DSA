#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = { 1, 2, 3, 4, 5, 6};

    //vector<int>::iterator it;
    // for(it=vec.begin();it!=vec.end();it++){        // forword 
    //     cout<< *(it) << " ";
    // }
    
    vector<int>::reverse_iterator itr;                // backword 
    for(itr=vec.rbegin();itr!=vec.rend();itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl;
    for(auto itr=vec.rbegin();itr!=vec.rend();itr++){   
        cout<<*(itr)<<" ";
    }
    
    return 0;
}