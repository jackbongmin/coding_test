
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>
#include <set>

using namespace std;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n;
    cin >> n;

    set<string, greater<string>> company;

    for (int i = 0; i < n; ++i) {
        string name, action;
        cin >> name >> action;

        if (action == "enter") 
        {
            company.insert(name);
        }
        else if (action == "leave") 
        {
            company.erase(name);
        }
    }

    for (auto person : company) {
        cout << person << "\n";
    }

    return 0;
    
}

