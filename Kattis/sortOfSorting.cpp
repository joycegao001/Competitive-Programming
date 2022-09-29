#include <bits/stdc++.h>

using namespace std;

bool cmp(string s1, string s2){
    if(int(s1[0])!=int(s2[0])){
        return int(s1[0]) < int(s2[0]);
    }
    else{
        if(int(s1[1])!=int(s2[1])){
            return int(s1[1])<int(s2[1]);
        }
    }
    return false;
}

int main(){

    int t;
    bool out=false;
    while(cin >> t && t){

        string s[400];
        for(int i =0; i < t; i++){
            cin >> s[i];
        }
        stable_sort(s,s+t,cmp);
        for(int i = 0; i < t; i++){
            cout << s[i] << "\n";
        }

        cout << "\n";
    }

    return 0;
}
