
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>

using namespace std;

int paper[100][100];

int N;

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    cin >> N;

    while (N--)
    {
        int x, y;
        cin >> x >> y;

        for (int i = x; i < (x + 10); ++i)
        {
            for (int j = y; j < (y + 10); ++j)
            {
                paper[i][j] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 100; j++)
        {
            if (paper[i][j] == 1)
            {
                area++;
            }
        }
    }

    cout << area;

    return 0;
}

