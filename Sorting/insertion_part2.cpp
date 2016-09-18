#include<iostream>
using namespace std;
void printarray(int arr[], int n);
void insertion_sort(int arr[], int n){
    
    int i, key, j;
    for(i = 1; i< n; i++){
        
        key = arr[i];
        j = i -1;
        
        while( j>=0 && arr[j] > key){
            arr[j+1]= arr[j];
            j = j-1;
        }
        
        arr[j+1] = key;
         printarray(arr, n);
         cout<<endl;
        
    }
    
}
void printarray(int arr[], int n) {
    for(int i = 0 ; i< n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[1000];
    int n;
    cin>>n;
    for(int i = 0 ; i < n; i++) {
        cin>>arr[i];
    }
    insertion_sort(arr, n);
}