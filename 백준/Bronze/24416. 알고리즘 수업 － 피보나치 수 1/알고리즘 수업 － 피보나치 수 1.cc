#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <vector>

using namespace std;

int f[41];


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    cin >> N;

    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= N; ++i)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    cout << f[N] << " " << N - 2;

    return 0;
}
 