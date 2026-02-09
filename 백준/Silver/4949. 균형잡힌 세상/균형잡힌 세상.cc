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



    while (true)
    {
        string s;
        getline(cin, s);
        if (s == ".")
        {
            break;
        }

        stack<char> st;
        bool isBalanced = true;

        for (char c : s)
        {
            if (c == '(' || c == '[')
            {
                st.push(c);
            }
            else if (c == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    isBalanced = false;
                    break;
                }
                st.pop();
            }
            else if (c == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    isBalanced = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty())
        {
			isBalanced = false;
        }

        if (isBalanced)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }


	return 0;
}