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

using namespace std;

// 28279

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    
    deque<int> d;
    int N;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int order;
        cin >> order;

        if (order == 1)
        {
            int num;
            cin >> num;
            d.push_front(num);
        }
        else if (order == 2)
        {
            int num;
            cin >> num;
            d.push_back(num);
        }
        else if (order == 3)
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (order == 4)
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (order == 5)
        {
            cout << d.size() << "\n";
        }
        else if (order == 6)
        {
            if (d.empty())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (order == 7)
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.front() << "\n";
            }
        }
        else if (order == 8)
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.back() << "\n";
            }
        }
    }
	return 0;
}