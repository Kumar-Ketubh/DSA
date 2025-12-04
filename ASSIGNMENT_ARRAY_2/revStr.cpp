#include<iostream>
using namespace std;

void revArr(char* arr, int n){
    int i = 0, j = n-1;
    while(i<=n/2){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        i++;
    }
}

int main(){
    char arr[5] = {'H','e','l','l','o'};

    revArr(arr, 5);

    for(int i = 0; i <5; i++) cout<<arr[i]<<" ";
}