#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char newstring(char A[100], int n, int i){
    char B[100];
    for(int j = i+1; i<n; j++){
        char B[i] = char A[j+1];
    }
    return B;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    char a[100];
    for(int i =0 ; i<n; i++){
        cin>>char[i];
    }
    for(int i =0; i<n; i++){
        if(a[i]==a[i+1]){
            a = newstring(a,n,i);
            n = n - 2; 
        }
    }
    cout<<a<<endl;
    return 0;
}
