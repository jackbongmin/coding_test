
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
#include <cctype>
#include <unordered_map>

using namespace std;



int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n;
    cin >> n;

	vector<int> dp(n + 1, 0);

    for (int i = 2; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        if(i % 3 == 0)
        {
            dp[i] = min(dp[i], dp[i / 3] + 1);
		}
    }

	cout << dp[n] << "\n";
    return 0;
    
}


