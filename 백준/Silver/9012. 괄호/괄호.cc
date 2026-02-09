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


    int T;
    cin >> T;

    while (T--) 
    {
        string VPS;
        cin >> VPS;

        stack<int> s;
        bool isVPS = true;

        for (char c : VPS) 
        {
            if (c == '(') 
            {
                s.push(1);
            }
            else if (c == ')') 
            {
                if (s.empty()) 
                {
                    isVPS = false;
                    break;
                }
                s.pop();
            }
        }


        if (!s.empty()) 
        {
            isVPS = false;
        }


        if (isVPS) 
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }


	return 0;
}