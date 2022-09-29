#include <bits/stdc++.h>

using namespace std;

int main(){


    int n,y;
    cin >> n >> y;
    bool arr[n];
    memset(arr,0,sizeof(arr));
    int num,right=0;
    for(int i = 0; i < y; i++){
        cin >> num;
        if(arr[num]==0){
            arr[num]=true;
            right++;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i]==false){
            cout << i << "\n";
        }
    }
    cout << "Mario got " << right << " of the dangerous obstacles." << "\n";

    return 0;
}
