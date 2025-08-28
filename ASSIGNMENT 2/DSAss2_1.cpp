#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    void isEmpty(){
        if(top == -1){
            cout<<"Stack is empty";
            return;
        }else{
            cout<<"stack is not empty";
        }
    }

    void isFull(){
        if(top == 99){
            cout << "Stack is full\n";
            return;
        }else{
            cout << "Stack is not full\n";
        }
    }

    void peek(int value){
        for(int i = 0; i<=top; i++){
            if(arr[i] == value){
                cout<<"Index : "<< i <<endl;
            }
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.isEmpty();
    s.isFull();
    s.peek(20);
    s.display();
    return 0;
}