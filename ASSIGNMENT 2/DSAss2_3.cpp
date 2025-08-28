#include<iostream>
#include<string>
using namespace std;

bool validParentheses(string s, int n){
    char stack[100]; 
    int top = -1;
    for(int i = 0; i<n; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            top++;
            stack[top] = s[i];
        }else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            
            if(top == -1) return false;
            
            if((s[i] == ')' && stack[top] != '(') ||
               (s[i] == '}' && stack[top] != '{') ||
               (s[i] == ']' && stack[top] != '[')){
                return false;
            }
            top--;
        }
    }
    return (top == -1); // if this condn is true means that the stack for checking is empty
                        // every corresponding element found its opening pair
}

int main(){
    string target;
    cin >> target;
    int i = 0; int n = 0;
    while(target[i] != '\0'){
        n++;i++;   
    }
    if(validParentheses(target, n) == true) 
        cout<<"parentheses is valid";
    else 
        cout<<"parentheses is not valid";
}
