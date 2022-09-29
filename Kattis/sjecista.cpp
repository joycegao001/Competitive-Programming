#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    cin >> n;
    int c=n-3;
    int sum=0;
    for(int i = 1,j=c;j>0;++i,--j){
        sum+=j*i;
    }

    cout << (n*sum)/4 << "\n";

    return 0;
}
