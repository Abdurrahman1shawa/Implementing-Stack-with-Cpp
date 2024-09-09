// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
template<class t>

class Stack {


    struct node {
        t itemValue;
        node* lastItemPtr;
    };

    node* top;
    node* currentPtr;
public : 
    Stack() {
        top = NULL;
    }

    void push(t newItem) {
        node* newItemPtr = new node();
        newItemPtr->itemValue = newItem;
        newItemPtr->lastItemPtr = top;
        top = newItemPtr;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void pop() {
        if (isEmpty()) {
            cout << "stack is empty";
        }
        else {
            node* temp = new node();
            temp = top;
            top = top->lastItemPtr;
            delete temp;
        }
    }

    void get_top() {
        if (isEmpty()) {
            cout << "stack is empty";
        }
        else {
            cout<< "top is: " << top->itemValue;

        }
    }
    void display() {
        currentPtr = top;
        cout << "[ ";
        while (currentPtr != NULL) {
            cout << currentPtr->itemValue << " ";
            currentPtr = currentPtr->lastItemPtr;
        }
        cout << "] \n";
    }
};

int main() {
    // Write C++ code here
    Stack<int>s;
    s.push(12);
    s.push(16);
    s.pop();
    s.push(134);
    s.display();
    s.push(10);
    s.get_top();
    return 0;
}