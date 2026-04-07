
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

bool compare(const string& a, const string& b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
	return a.length() < b.length();
}

int main()
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n;
	cin >> n;

    vector<string> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
	}

    sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    return 0;

    
}



