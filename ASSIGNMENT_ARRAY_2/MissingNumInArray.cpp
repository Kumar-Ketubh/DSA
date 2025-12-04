#include<iostream>
using namespace std;

//a) In linear time
int NumFinder(int arr[], int size, int n){
    int totalSum = n*(n+1)/2;
    int sum = 0;

    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    return totalSum - sum;
}

//b) using binary search


int main(){
    int size,n;
    cout<<"size of array: "; cin >> size;
    cout<<"range of integers"; cin >> n;

    int arr[size];
     for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout<<"the missing number is : "<<NumFinder(arr, size , n)<<endl;
    
}