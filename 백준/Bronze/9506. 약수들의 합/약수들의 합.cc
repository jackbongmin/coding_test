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

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    while (true)
    {
        int N;
        cin >> N;

		if (N == -1) break;
        
        queue<int> q;
        int sum = 0;

        for (int i = 1; i < N; ++i)
        {
            if (N % i == 0)
            {
                q.push(i);
                sum += i;
            }
        }
        if (sum == N)
        {
            cout << N << " = ";
            while (!q.empty())
            {
                cout << q.front();
                q.pop();
                if (!q.empty())
                {
                    cout << " + ";
                }
            }
            cout << "\n";
        }
        else
        {
            cout << N << " is NOT perfect.\n";
        }
    }


	return 0;
}