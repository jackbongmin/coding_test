
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


    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        long long a = 1;

        for (int i = 0; i < n; ++i)
        {
            a = a * (m - i) / (i + 1);

        }

        cout << a << "\n";
    }

    return 0;
    
}


