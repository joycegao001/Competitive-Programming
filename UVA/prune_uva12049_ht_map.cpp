//#include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t; 
    while(t--){
        int n,m;
        cin >> n >> m;
        map<int,int> m1;
        int num;

        int extra=0;
        for(int i = 0; i < n; i++){
            cin >> num;
            m1[num]++;
        }
        
        for(int i = 0; i < m; i++){
            cin >> num;
            m1[num]--;
        }

        map<int,int>::iterator it1;

        for(it1=m1.begin();it1!=m1.end();it1++){
            extra+=abs(it1->second);
        }

        cout << extra << "\n";
        
        

    }

    return 0;
}