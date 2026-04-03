
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

bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = (n - 1); i >= 0; --i)
    {
        if (arr[i] <= k)
        {
            count += (k / arr[i]);
            k = k % arr[i];
        }
    }
	cout << count << "\n";

    return 0;
    
}



