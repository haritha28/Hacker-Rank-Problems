#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int A[1000];
    int n;
    int V;
    cin>>V;
    cin>>n;
    for (int i = 0; i< n; i++){
        cin>>A[i];
    }
    for (int i = 0; i< n; i++) {
        if (A[i] == V){
            cout << i ;
            break;
        }
    }
    return 0;
}
