
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>

using namespace std;



int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int a, b;

    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
        }

        if (b % a == 0)
        {
            cout << "factor\n";
        }
        else if (a % b == 0)
        {
            cout << "multiple\n";
        }
        else
        {
            cout << "neither\n";
        }

    }
    return 0;
}

