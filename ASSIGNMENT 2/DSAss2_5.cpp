#include <iostream>
#include <string>
using namespace std;

int evalPostfix(string postfix) {
    int stack[100];
    int top = -1;

    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];

        if (c >= '0' && c <= '9') {
            top++;
            stack[top] = c - '0';
        }
        else {
            int b = stack[top];
            top--;
            int a = stack[top];
            top--;

            if (c == '+') {
                top++;
                stack[top] = a + b;
            }
            else if (c == '-') {
                top++;
                stack[top] = a - b;
            }
            else if (c == '*') {
                top++;
                stack[top] = a * b;
            }
            else if (c == '/') {
                top++;
                stack[top] = a / b;
            }
        }
    }
    return stack[top];
}

int main() {
    string postfix;
    cin >> postfix;
    cout << evalPostfix(postfix);
    return 0;
}
