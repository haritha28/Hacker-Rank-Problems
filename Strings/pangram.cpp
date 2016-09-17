#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    
    int flag = 0;
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        if (! (s[i] >= 'a' && s[i] <= 'z' )) {
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"pangram";
    } else {
        cout<<"not pangram";
    }
    return 0;
}
