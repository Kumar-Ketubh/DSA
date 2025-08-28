#include<iostream>
#include<string>
using namespace std;

int main(){
    string target = "DataStructure";
    int i = 0; int top = -1;
    char st[100];
    while(target[i] != '\0'){
        st[i] = target[i];
        i++;
        top++;
    }

    for(int i = top; i>=0; i--){
        cout<<st[i];
    }
}