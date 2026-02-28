
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

long long p[101];

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    p[1] = 1;
    p[2] = 1;
    p[3] = 1;

    for (int i = 4; i <= 100; ++i)
    {
        p[i] = p[i - 2] + p[i - 3];
    }

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        cout << p[N] << "\n";
    }

    return 0;
    
}

