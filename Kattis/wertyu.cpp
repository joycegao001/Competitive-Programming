#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    map<char,char> m;
    m[' ']=' ';
    s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    for(int i = 1; i < s.length();i++){
        m[s[i]]=s[i-1];
    }
    while(getline(cin,s)){
        for(int i = 0; i < s.length();i++){
            s[i]=m[s[i]];
        }
        cout << s << "\n";

    }

    return 0;
}
