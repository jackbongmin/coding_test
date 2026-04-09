
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>
#include <set>
#include <cctype>
#include <unordered_map>

using namespace std;


int main()
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n;
	cin >> n;

    int count = 0;
    int num = 666;

    while (true)
    {
		string s = to_string(num);
        if (s.find("666") != string::npos)
        {
            count++;
        }
        if(count == n)
        {
			cout << num << "\n";
            break;
        }
        num++;
    }
	return 0;
}

