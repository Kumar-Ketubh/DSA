#include <iostream>
#include <string>
using namespace std;

int prec(char c) {
    if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return 0;
}

string infixToPostfix(string infix) {
    char stack[100];
    int top = -1;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')) {
            postfix += c;
        }
        else if (c == '(') {
            top++;
            stack[top] = c;
        }
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix += stack[top];
                top--;
            }
            top--; 
        }
        else {
            while (top != -1 && prec(stack[top]) >= prec(c)) {
                postfix += stack[top];
                top--;
            }
            top++;
            stack[top] = c;
        }
    }

    while (top != -1) {
        postfix += stack[top];
        top--;
    }

    return postfix;
}

int main() {
    string infix;
    cin >> infix;
    cout << infixToPostfix(infix);
    return 0;
}
