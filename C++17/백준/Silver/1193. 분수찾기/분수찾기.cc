
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

    int a = 1;
    while (n > a)
    {
		n -= a;
        a++;
    }
    if (a % 2 == 0)
    {
        cout << n << "/" << a - n + 1 << "\n";
    }
    else
    {
		cout << a - n + 1 << "/" << n << "\n";
    }
    
}
/*
1/1
1/2 2/1
3/1 2/2 1/3
1/4 2/3 3/2 4/1
5/1 4/2 3/3 2/4 1/5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


*/
