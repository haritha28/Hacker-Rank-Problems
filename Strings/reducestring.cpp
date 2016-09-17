#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    while(1){
        bool ok =false;
        for(int i = 0; i < s.length(); i++){
            if(i != s.length() - 1 and s[i] == s[i + 1] and ok == false){
                ok = true, i++;
            }
            else t = t + s[i];
        }
        s = t;
        t.clear();
        if(!ok) break;
    }
    if(!s.size())   cout<<"Empty String"<<endl;
    else cout<<s<<endl;
}

//If bool value of ok not set for the first test case say "aaabccddd" no issues
//If for test case 2 baab we need ok value to re-check if the new string "bb" can be emptied.