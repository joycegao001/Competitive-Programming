#include <bits/stdc++.h>


using namespace std;

int main(){


    int n;
    cin >> n;

    vector<int>counts;
    counts.resize(1000001,0);

    for(int i =0; i < n; i++){
        int temp;
        cin >> temp;

        if(counts[temp]==0){
            counts[temp-1]++;
        }
        else{
            counts[temp-1]++;
            counts[temp]--;
        }
    }

    int throws = 0;
    for(int i = 0; i < 1000001; i++){
        throws+=counts[i];
    }
    cout << throws << "\n";

    return 0;
}
