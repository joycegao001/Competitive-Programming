#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        string name;
        string enrol_year,birth_year;
        int course;
        cin >> name >> enrol_year >> birth_year >> course;
        int y1 = stoi(enrol_year.substr(0,4));
        int y2 = stoi(birth_year.substr(0,4));
        cout << name  << " ";
        if (y1 >= 2010){
            cout << "eligible" << "\n";
        }
        else if (y2 >= 1991){
            cout << "eligible" << "\n";
        }
        else if (course <= 40){
            cout << "coach petitions" << "\n";
        }
        else{
            cout << "ineligible" << "\n";
        }


    }
    return 0;
}
