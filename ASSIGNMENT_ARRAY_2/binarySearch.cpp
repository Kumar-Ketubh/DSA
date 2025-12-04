#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int low = 0, high = n-1;
    
    while(low<=high){
        int mid = (low + (high-low))/2;
        
        if(target>arr[mid]){
            low = mid + 1;
        
        }else if(target<arr[mid]){
            high = mid - 1;
        
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[7] = {64,34,25,12,22,11,90};

    int target;
    cout<<"enter value to be found: "; cin>> target;

    int ans = binarySearch(arr, 7, target);
    
    if(ans == -1) cout<<"element not found" << endl;
    else cout<<"index is : "<< ans <<endl;
}   