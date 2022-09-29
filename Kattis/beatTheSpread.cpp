#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    cin >> n;
    while(n--){
        int s,d;
        int a,b;
        cin >> s >> d;
        if(s<d || (s+d)%2!=0 || (s-d)%2!=0){
            cout << "impossible" << "\n";
        }
        else{
            a=(s+d)/2;
            b=(s-d)/2;
            cout << a << " " << b << "\n";

        }


    }

    return 0;
}
