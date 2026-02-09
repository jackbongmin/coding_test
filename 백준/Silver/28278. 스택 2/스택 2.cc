#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>

using namespace std;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    int M, X;
    stack<int> s;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> M;
        if (M == 1)
        {
            cin >> X;
			s.push(X);
        }
        else if (M == 2)
        {
            if (s.empty())
                cout << -1 << "\n";
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (M == 3)
        {
            cout << s.size() << "\n";
        }
        else if (M == 4)
        {
            if (s.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (M == 5)
        {
            if (s.empty())
                cout << -1 << "\n";
            else
                cout << s.top() << "\n";
        }
    }


    

	return 0;
}