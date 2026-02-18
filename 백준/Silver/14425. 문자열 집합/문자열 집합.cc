#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int arrN[500001];

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    map<string, bool> m;
    string str;

    for (int i = 0; i < N; ++i) 
    {
        cin >> str;
        m[str] = true;
    }

    int count = 0;

    for (int i = 0; i < M; ++i) {
        cin >> str;


        if (m[str] == true) 
        {
            count++;
        }
    }

    cout << count;

    return 0;


}
 