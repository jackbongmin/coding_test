
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

void solve()
{
    int a, b;
    cin >> a >> b;

    a = a % 10;

    if (a == 0)
    {
        cout << 10 << "\n";
        return;
    }

    b = b % 4;

    if (b == 0)
    {
        b = 4;
    }

    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result = (result * a) % 10; 
    }

    cout << result << "\n";
}
int main()
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;
    cin >> t; 

    while (t--)
    {
        solve();
    }

    return 0;
}

