#include<iostream>
using namespace std;

#define n 100

class stack {
    int* arr;
    int top;

public:
    stack() {   // constructor
        arr = new int[n];   // allocate memory to array
        top = -1;  // initialize the member variable 'top'
    }

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack is in overflow condition" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if (top == -1) {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;  // Output: 3
    st.pop();
    cout << st.Top() << endl;  // Output: 2
    st.pop();
    st.pop();
    st.pop();  // This will display "No element to pop"
    cout << st.empty() << endl;  // Output: 1 (true, since stack is empty)

    return 0;
}
