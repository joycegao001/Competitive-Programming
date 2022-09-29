//#include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    vector<int> v;
    while(cin >> x){

        v.push_back(x);
        sort(v.begin(),v.end());
        if(v.size()%2==0){
            int num1=v.size()/2;
            int num2=(v.size()/2)-1;
            int ave=(v[num1]+v[num2])/2;
            cout << ave << "\n";
        }
        else{
            int num=v.size()/2;
            cout << v[num] << "\n";
        }
    }

    return 0;
}