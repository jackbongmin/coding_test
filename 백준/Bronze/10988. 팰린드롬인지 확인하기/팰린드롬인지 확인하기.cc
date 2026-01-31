#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    cin >> s;

    int length = s.length();
    int p = 1; 

    for (int i = 0; i < length / 2; ++i)
    {
        if (s[i] != s[length - 1 - i])
        {
            p = 0;
            break;
        }
    }

    cout << p;
    return 0;
}
 