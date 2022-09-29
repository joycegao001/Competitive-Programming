//#include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    unordered_map<string,int> mp;
    string word;
    string c;
    

    while(cin >> n >> c){
        int max = 0;
        for(int i = 0; i < c.length()-n+1;i++){
            word.assign(c,i,n);
            mp[word]++;
            if(mp[word]>max){
                max=mp[word];
            }
            word="";
        }
        
        unordered_map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second==max){
                cout << it->first << "\n";
            }
        }
    }

    return 0;
}