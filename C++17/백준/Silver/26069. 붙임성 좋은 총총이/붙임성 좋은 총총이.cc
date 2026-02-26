
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


    int N;
    cin >> N;

    set<string> dance;

    dance.insert("ChongChong");

    for (int i = 0; i < N; ++i) {
        string a, b;
        cin >> a >> b;

        if (dance.find(a) != dance.end() || dance.find(b) != dance.end()) {
            dance.insert(a);
            dance.insert(b);
        }
    }

    cout << dance.size() << "\n";
    return 0;
    
}

