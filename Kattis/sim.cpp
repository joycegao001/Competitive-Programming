#include <bits/stdc++.h>

using namespace std;


int main(){


    int t;
    cin >> t;
    cin.ignore(); //ignore spaces

    while(t--){
        string c;
        getline(cin,c);

        list<char> l;
        list<char>::iterator it=l.begin();

        for(int i = 0; i < c.length();i++){
            switch(c[i]){
                case '<':
                    if(it!=l.begin()){
                        it=l.erase(--it);
                    }
                    break;
                case '[':
                    it=l.begin();
                    break;
                case ']':
                    it=l.end();
                    break;
                default:
                    it=l.insert(it,c[i]);
                    it++;
                    break;
            }

        }


        for(it=l.begin();it!=l.end();it++){
            if(*it!='['){
                cout << *it;
            }
        }

        cout << "\n";
    }

    return 0;
}
