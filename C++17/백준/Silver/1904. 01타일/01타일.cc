
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

int dp[1000001];

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    cin >> N;

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= N; ++i)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    cout << dp[N]<< "\n";
    return 0;
    
}

