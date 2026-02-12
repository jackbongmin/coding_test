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

// 2346

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    deque<pair<int, int>> dq;
    int N;

    cin >> N;
    int num;

    for (int i = 1; i <= N; ++i)
    {
        cin >> num;
        dq.push_back({i, num});
    }

    while (!dq.empty())
    {
        int cur = dq.front().first;
        int move = dq.front().second;
        dq.pop_front();

        cout << cur << " ";

        if (dq.empty())
        {
            break;
        }

        if (move > 0)
        {
            for (int i = 0; i < (move - 1); ++i)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else 
        {
            for (int i = 0; i < abs(move); ++i) 
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }


	return 0;
}