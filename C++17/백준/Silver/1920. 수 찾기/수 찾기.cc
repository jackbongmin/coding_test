
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

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
		cin >> a[i];
    }

	sort(a.begin(), a.end());

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;

        if (binary_search(a.begin(), a.end(), x))
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }


    return 0;
    
}


