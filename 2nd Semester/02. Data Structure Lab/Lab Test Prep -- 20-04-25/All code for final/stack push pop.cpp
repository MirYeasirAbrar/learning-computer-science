#include <bits/stdc++.h>
using namespace std;

int stk[5], top = -1, mx = 5; // Consistent array size
int i, c; // Global variables for choice and loop

void push() {
    if (top == mx - 1) { // Check for overflow (mx-1 because top is 0-based)
        cout << "Overflow" << endl;
        return;
    }
    
    int item;
    cout << "Enter push item: ";
    cin >> item;
    top = top + 1;
    stk[top] = item;
    
    cout << "\nStack:" << endl;
    for (i = top; i >= 0; i--) {
        cout << "stack[" << i << "] = " << stk[i] << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
        return;
    }
    
    int item = stk[top];
    top = top - 1;
    cout << "Popped item: " << item << endl;
    
    cout << "\nStack:" << endl;
    for (i = top; i >= 0; i--) {
        cout << "stack[" << i << "] = " << stk[i] << endl;
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    while (true) {
        cout << "\nEnter your choice:" << endl;
        cout << "1. Push" << endl << "2. Pop" << endl << "3. Exit" << endl;
        cin >> c;
        
        switch (c) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}