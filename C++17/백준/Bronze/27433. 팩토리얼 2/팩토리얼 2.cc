
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>

using namespace std;

long long fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fac(n - 1);
}

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    cin >> N;

    cout << fac(N);

    
    return 0;
}

