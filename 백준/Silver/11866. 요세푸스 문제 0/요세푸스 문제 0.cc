#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

// 11866

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K;
    queue<int> q;

    cin >> N >> K;
    for (int i = 1; i <= N; ++i)
    {
        q.push(i);
    }

    cout << "<";

    while (q.size() != 0)
    {
        for (int i = 0; i < (K - 1); ++i)
        {
            q.push(q.front());
            q.pop();
        }
        if (q.size() == 1)
        {
            cout << q.front() << ">";
            q.pop();
        }
        else
        {
            cout << q.front() << ", ";
            q.pop();
        }
    }



	return 0;
}