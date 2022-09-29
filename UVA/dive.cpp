#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,r;

    while(cin >> n >> r){
        bool vol[100001]={false};
        int d=0;
        for(int i = 1; i <= r; i++){
            int id;
            cin >> id;
            vol[id]=true;
        }
        for(int i = 1; i <=n; i++){
            if(vol[i]==false){
                cout << i << " ";
                d++;
            }
        }
        if(d==0){
            cout << "*";
        }
        cout << "\n";
        

    }



    return 0;
}
