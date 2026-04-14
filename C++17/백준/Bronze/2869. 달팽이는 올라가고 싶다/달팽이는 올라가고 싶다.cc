
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


    int a, b, v;
    cin >> a >> b >> v;

    int day
        = (v - a) / (a - b) + 1;

    if ((v - a) % (a - b) != 0)
    {
        day++;
    }

    cout << day << "\n";

    return 0;

}

