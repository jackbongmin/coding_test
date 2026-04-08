
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

    if (n == 1)
    {
		cout << 1 << "\n";
        return 0;
    }

    int a = 1;
    int b = 1;
    while (n > b)
    {
        b += 6 * a;
        a++;
    }

	cout << a << "\n";

    return 0;

    
}

// 2 8 20 38 62
//  6 12 18 24 30
//  1 2  3  4  5


