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


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	queue<int> q;
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string st;
        cin >> st;

        if (st == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (st == "pop")
        {
            if (q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (st == "size")
        {
            cout << q.size() << "\n";
        }
        else if (st == "empty")
        {
            if (q.empty())
            {
                cout << "1\n";
            }
            else
            {
				cout << "0\n";
            }
        }
        else if (st == "front")
        {
            if (q.empty())
            {
                cout << "-1\n";
            }
            else
            {
				cout << q.front() << "\n";
            }
        }
        else if (st == "back")
        {
            if (q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << q.back() << "\n";
            }
        }
    }

	return 0;
}