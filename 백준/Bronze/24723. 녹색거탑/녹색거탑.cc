#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <cmath>

using namespace std;

// 15439

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    

    int N;
    int M = 1;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        M *= 2;
    }
    cout << M;



	return 0;
}