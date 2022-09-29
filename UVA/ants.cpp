//#include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;



int main(){

    int t;

    while(scanf("%d",&t)==1&&t){
        int l,w,h;
        int max_h=0,max_total=0;
        int total;
        for(int i =0; i < t; i++){
            cin >> l >> w >> h;   
            total=h*l*w;
            if(h>max_h || (h==max_h && total>max_total)){
                max_h=h;
                max_total=total;
            }
        }
        cout << max_total << "\n";
    }

    return 0;
}